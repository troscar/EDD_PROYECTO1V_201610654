#ifndef NODOUSUARIO_H_INCLUDED
#define NODOUSUARIO_H_INCLUDED
#include <iostream>
#include <string>
#include "ArbolAvl.h"

using namespace std;

class NodoUsuario{
    public:
        NodoUsuario(string name_,string pass,string ){
            name = name_;
            password = pass;
            departamento = "";
            empresa = "";

            next = 0;
            before = 0;
        }
    private:
    string name;
    string password;
    string departamento;
    string empresa;
    AVL arboll;
    

    NodoUsuario *next;
    NodoUsuario *before;
};
#endif