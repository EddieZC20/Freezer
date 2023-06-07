#include <iostream>
#include <string>
#include <stdlib>
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
    return::getEstado;
}

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
};

Interfaz::Interfaz()
{
    Pause=0;
    Favorito=0;
}

