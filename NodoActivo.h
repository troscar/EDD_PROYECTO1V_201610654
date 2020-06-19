#ifndef NODOACTIVO_H_INCLUDED
#define NODOACTIVO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class NodoActivo{
    public:
        NodoActivo(string name_,string desc_,string codi_,string prop_,string comp_,string id_,string deppa,string emmpre){
            name = name_;
            descripcion =desc_;
            codigo = codi_;
            propietario = prop_;
            Comprador =comp_;
            ID = id_;
            depa = deppa;
            empre = emmpre;

        }
    string getname(){return name;};
    string getdescripcion(){return descripcion;};
    string getcodigo(){return codigo;};
    string getpropietario(){return propietario;};
    string getComprador(){return Comprador;};
    string getID(){return ID;};
    string getDepa(){return depa;};
    string getEmpre(){return empre;};

    void setname(string n){name=n;};
    void setdescripcion(string n){descripcion=n;};
    void setcodigo(string n){codigo=n;};
    void setpropietario(string n){propietario=n;};
    void setComprador(string n){Comprador=n;};
    void setID(string n){ID=n;};
    private:
    string name;
    string descripcion;
    string codigo;
    string propietario;
    string Comprador;
    string ID;
    string depa;
    string empre;
};
#endif