#ifndef NODOUSUARIO_H_INCLUDED
#define NODOUSUARIO_H_INCLUDED
#include <iostream>
#include <string>
#include "ArbolAvl.h"
#include "ListaDobleC.h"
#include "NodoActivo.h"
using namespace std;

class NodoUsuario{
    public:
        NodoUsuario(string name_,string pass,string depa_,string empre_){
            name = name_;
            password = pass;
            departamento = depa_;
            empresa = empre_;
        }

        string getname(){return name;};
        string getpassword(){return password;};
        string getdepartamento(){return departamento;};
        string getempresa(){return empresa;};

        ListaDobleC<NodoActivo>* llistaActivo;
    private:
    string name;
    string password;
    string departamento;
    string empresa;
};
#endif