#include <iostream>
#include <string>
#include <fstream>
#include "Cubo.h"
#include "NodoCubo.h" 

using namespace std;



void menu ();

//ArbolBB* Arbol = new ArbolBB();
// CLASE DE EJEMPLO QUE SE ALMACENARA EN LA PILA'

    Cubo *Matriz = new Cubo("Admin");
    NodoCubo *verificar; 
    NodoCubo *noodo;
    
int main()
{
    
    menu();
    system("pause");

    return 0;
}

void menu()
{   
    int opcion = 0;
    string nombre = "",usuario = "",passw = "", depar = "", empre = "";
    string todo;
    noodo = new NodoCubo("Julio","Max","Guate","julio");
    Matriz->insertar_nodo_conectando(noodo);Matriz->recorrer_cubo_en_colum();
    Matriz->recorrer_cubo_en_fila();
    while(opcion!=6){
        cout<< ">> %%%%%%%%%%%%%%%%%%%  Renta de Activos  %%%%%%%%%%%%%%%%%%%"<<endl;
        cout<< ">> %%%%%%%%%%%%%%%%%%% 1. Iniciar Sesion  %%%%%%%%%%%%%%%%%%%"<<endl;
        cout<< ">> %%%%%%%%%%%%%%%%%%%  Ingresar Opcion:  %%%%%%%%%%%%%%%%%%%"<<endl;
        cin >> opcion; 
        switch (opcion)
        {
        case 1:    
                system("cls");
                verificar = 0;
                cout<< "%%%%%%%%%%%%%%%%%%%% Renta de Activos %%%%%%%%%%%%%%%%%%%%"<<endl;
                cout<< "%%%%%%%%%%%%%%%%%%%%      Login       %%%%%%%%%%%%%%%%%%%%"<<endl;
                cout<< ">> ...Ingresar Usuario...: <<" <<endl;
                cin >> usuario;
                cout<< ">> ...Ingresar Contraseña...: <<" <<endl;
                cin >> passw;
                cout<< ">> ...Ingresar Departamento...: << " <<endl;
                cin >> depar;
                cout<< ">> ...Ingresar Empresa...:  <<" <<endl;
                cin >> empre;
                //busscar USUARIO Y CONFIRMAR CONTRASEÑAS
                Matriz->recorrer_cubo_en_colum();
                //verificar = Matriz->buscar_nodo_(usuario);
                //if(verificar!=0){
                    //if((verificar->getPass().compare(passw))&&(verificar->getYear().compare(depar))&& (verificar->getMonth().compare(empre)))
                /*    {
                        
                    }
                }*/
                
                
                system("pause");
            break;
        case 2:
            cout<< "\n Mostrar Arbol Completo \n\n";
            cout<<"\n"<<endl;
            system("pause");
            break;
        default:
            break;

        }
    system("cls");
    }
    system("pause");

}