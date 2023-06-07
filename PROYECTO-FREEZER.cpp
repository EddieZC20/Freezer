#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class User
{
protected:
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
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
////////////////////////////////////////////////////////////////////////////////////////////////////7
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
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Listado
{
private:
    int NumReproducciones;
    int NumCanciones;
    File Listado;
};
