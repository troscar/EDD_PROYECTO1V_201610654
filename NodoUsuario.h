#ifndef NODOUSUARIO_H_INCLUDED
#define NODOUSUARIO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class NodoUsuario{
    public:
        NodoUsuario(string name_,string pass,string ){
            name = name_;
            password = pass;
            year = "0";
            pass = "0";

            next = 0;
            before = 0
        }
    private:
    string name;
    string password;
    string year;
    string  pass;

    NodoUsuario *next;
    NodoUsuario *before;
};
#endif