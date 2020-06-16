#include <iostream>
#include <string>
#include <fstream>

#include "json/json.hpp"
#include "EDD/ArbolBB.h"
using namespace std;

void menu ();

ArbolBB* Arbol = new ArbolBB();
// CLASE DE EJEMPLO QUE SE ALMACENARA EN LA PILA
int main()
{
    
    using json = nlohmann::json;
    json j;
    cout << "Ingrese el nombre y extension de la playlist"<<endl;
    string ingreso_lista = "";
    cin >> ingreso_lista;
    std::ifstream reader(ingreso_lista);
    reader >> j;
    string t = j["Type"];
    cout << t; 
    for (const auto& Canciones__ : j["Songs"]) {
            string nameAnyo =  Canciones__["Year"];
            string nameMonth =  Canciones__["Month"];
            string nameAlb =  Canciones__["Album"];
            string nameSong =  Canciones__["Song"];
            string nameArt =  Canciones__["Artist"];
            cout << nameSong<<endl;
            cout << nameArt <<endl;
            cout << nameAlb <<endl;
            cout << nameAnyo <<endl;
            cout << nameMonth <<endl;
            Arbol->insertar(nameSong,t);
        
    }
    reader.close();

    Arbol->Graficar();
    Arbol->mostrar_arbol();
    system("pause");

    return 0;
}

void menu()
{   
    ArbolBB* Arbol = new ArbolBB();
    string nombre;
    int opcion = 0,contador = 0;
    do{
        cout<< "\t MENU "<<endl;
        cout<< "1. Insertar Nodo nuevo"<<endl;
        cout<< "2. Mostrar Arbol Completo"<<endl;
        cout<< "3. Salir"<<endl;
        cout<< "Opcion: "<<endl;
        cin >> opcion; 
        switch (opcion)
        {
        case 1:
            nombre ="";
            cout<<"\n Ingrese nombre:";
            cin >> nombre;
            cout << "\n";
            Arbol->insertar(nombre,0);
            system("pause");
            break;
        case 2:
            cout<< "\n Mostrar Arbol Completo \n\n";
            Arbol->mostrar_arbol();
            cout<<"\n"<<endl;
            system("pause");
            break;
        default:
            break;

        }
    system("cls");
    }while(opcion!=3);

}