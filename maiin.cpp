#include <iostream>
#include <string>
#include <fstream>
#include "Cubo.h"
#include "NodoCubo.h" 
//#include "NodoUsuario.h"
#include "ArbolAvl.h"
#include "ListaDobleC.h"
#include "ListaEnlazada.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;



void menu ();

//ArbolBB* Arbol = new ArbolBB();
// CLASE DE EJEMPLO QUE SE ALMACENARA EN LA PILA'
    Cubo *Matriz = new Cubo("Admin");
    NodoCubo *verificar; 
    NodoCubo *noodousuario;
    //Lista<NodoUsuario> *Usuarios;
   // ListaDobleC<NodoActivo> *Activos;
    
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
                cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
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
                ///Matriz->recorrer_cubo_en_colum();
                //verificar = Matriz->buscar_nodo_(usuario);
                //if(verificar!=0){
                    //if((verificar->getPass().compare(passw))&&(verificar->getYear().compare(depar))&& (verificar->getMonth().compare(empre)))
                /*    {
                        
                    }
                }*/
                 // Un �rbol de enteros
   

                // Inserci�n de nodos en �rbol:
                ArbolInt.Insertar("a");
                ArbolInt.Insertar("z");
                ArbolInt.Insertar("d");
                ArbolInt.Insertar("x");
                ArbolInt.Insertar("c");
                ArbolInt.Insertar("i");
                ArbolInt.Insertar("m");
                cout<< " . " <<endl;

                /*cout << "Altura de arbol " << ArbolInt.AlturaArbol() << endl;
                ArbolInt.PostOrden(Mostrar);
                cout << endl;
                ArbolInt.PreOrden(Mostrar);
                cout << endl;
                ArbolInt.InOrden(Mostrar);
                cout << endl;*/
                //ArbolInt.Borrar("d");

                ArbolInt.Graficar();

                                
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