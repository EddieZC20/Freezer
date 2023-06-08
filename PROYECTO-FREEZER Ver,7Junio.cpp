#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class User
{
private:
    string Nombre;
    string Password;
    bool Estado;

public:
    User();
    User (string a, string b, bool c);
    void setNombre(string a);
    void setPassword(string b);
    void setEstado(bool c);
    string getNombre();
    string getPassword();
    bool getEstado();
    //Metodos
    void iniciarSesion();
    void crearCuenta();
    void eliminarCuenta();
};

User::User()
{
    Nombre="Ninguno";
    Password="Ninguno";
    Estado=0;
}

User::User(string a, string b, bool c)
{
    Nombre=a;
    Password=b;
    Estado=c;
}

void User::setNombre(string a){
	Nombre=a;
}

void User::setPassword(string b){
    Password=b;
}

void User::setEstado(bool c){
    Estado=c;
}

string User::getNombre(){
	return Nombre;
}

string User::getPassword(){
    return Password;
}

bool User::getEstado(){
    return Estado;
}
////////////////////////////////
class Interfaz
{
protected:
    bool Pause;
    int Favorito;

public:
    Interfaz();
    Interfaz(bool a, int b);
    void setPause(bool a);
    void setFavorito(int b);
    bool getPause();
    int getFavorito();

        //Metodosss
};

Interfaz::Interfaz()
{
    Pause=0;
    Favorito=0;
}

Interfaz::Interfaz(bool a, int b)
{
    Pause=a;
    Favorito=b;
}

void Interfaz::setPause(bool a){
	Pause=a;
}

void Interfaz::setFavorito(int b){
    Favorito=b;
}

bool Interfaz::getPause(){
	return Pause;
}

int Interfaz::getFavorito(){
    return Favorito;
}
///////////////////////////
class Cancion
{
private:
    string Artista;
    string NombreSong;
    float Duracion;
    string Bits;

public:
    Cancion();
    Cancion(string a, string b, float c, string d);
    void setArtista(string a);
    void setNombreSong(string b);
    void setDuracion(float c);
    void setBits(string d);
    string getArtista();
    string getNombreSong();
    float getDuracion();
    string getBits();

    //METODOSSSS
};

Cancion::Cancion()
{
    Artista="Ninguno";
    NombreSong="Ninguno";
    Duracion=0.0;
    Bits="Ninguno";

}

Cancion::Cancion(string a, string b, float c, string d)
{
    Artista=a;
    NombreSong=b;
    Duracion=c;
    Bits=d;
}

void Cancion::setArtista(string a){
	Artista=a;
}

void Cancion::setNombreSong(string b){
    NombreSong=b;
}

void Cancion::setDuracion(float c){
    Duracion=c;
}

void Cancion::setBits(string d){
    Bits=d;
}

string Cancion::getArtista(){
	return Artista;
}

string Cancion::getNombreSong(){
    return NombreSong;
}

float Cancion::getDuracion(){
    return Duracion;
}

string Cancion::getBits(){
    return Bits;
}



int main()
{
    User usuario1;

    int opcion;
    do {
        cout << "\n====== Menu ======" << endl;
        cout << "1. Iniciar sesion" << endl;
        cout << "2. Crear cuenta" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                usuario1.iniciarSesion();
                if (usuario1.getEstado()) {
                system("pause>null");
                system("cls");
                    cout << "Inicio de sesion exitoso. ¡Bienvenido, " << usuario1.getNombre() << "!" << endl;

                    int menuOpcion;
                    do {
                        cout << "\n====== Menu del Usuario ======" << endl;
                        cout << "1. Reproducir cancion" << endl;
                        cout << "2. Agregar cancion" << endl;
                        cout << "3. Eliminar cancion" << endl;
                        cout << "4. Cerrar sesion" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> menuOpcion;

                        switch (menuOpcion) {

                            case 1:
                                // Lógica para reproducir la canción
                                cout << "Reproduciendo cancion..." << endl;
                                system("pause>null");
                                break;
                            case 2:
                                // Para agregar una canción
                                cout << "Cancion agregada." << endl;
                                system("pause>null");
                                break;

                            case 3:
                                 // Para eliminar una cancion
                                cout << "Cancion eliminada." << endl;
                                system("pause>null");
                                break;
                            case 4:
                                usuario1.setEstado(false);
                                cout << "Cerrando sesion. Saliendo del programa." << endl;
                                system("pause>null");
                                break;
                            default:
                                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                                system("pause>null");
                                break;


                        }
                        system("cls");
                    } while (menuOpcion != 4);
                } else {
                    cout << "Inicio de sesion fallido.Usuario no encontrado, por favor, verifique sus credenciales ." << endl;
                    system("pause>null");
                    system("cls");
                }
                break;
            case 2:
                usuario1.crearCuenta();
                system("pause>null");
                system("cls");
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción invalida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}

////////////////////////////////////




class Listado
{
private:
    int NumReproducciones;
    int NumCanciones;
    //File Listado;
};


void User::iniciarSesion() {
    string nombre, password;
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombre;
    cout << "Ingrese la contrasenia: ";
    cin >> password;

    if (nombre == Nombre && password == Password && Estado) {
        cout << "Inicio de sesion exitoso. ¡Bienvenido, " << Nombre << "!" << endl;
        // Estaría cotorro poner un sonido que sea como de que se logro iniciar sesion
    } else {
        cout << "Inicio de sesión fallido. Por favor, verifique sus credenciales." << endl;
        // Aquí lo contrario xd
    }
}

void User::crearCuenta() {
    string nombre, password;
    cout << "Ingrese un nuevo nombre de usuario: ";
    cin >> nombre;
    cout << "Ingrese una nueva contrasenia: ";
    cin >> password;

    setNombre(nombre);
    setPassword(password);
    setEstado(true);

    cout << "Cuenta creada exitosamente. Ahora puede iniciar sesion." << endl;
}

void User::eliminarCuenta() {
    setNombre("Ninguno");
    setPassword("Ninguno");
    setEstado(false);

    cout << "Cuenta eliminada correctamente." << endl;
}
