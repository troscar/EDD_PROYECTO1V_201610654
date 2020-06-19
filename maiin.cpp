#include <iostream>
#include <string>
#include <fstream>
#include "Cubo.h"
#include "NodoCubo.h" 
#include "ListaDobleC.h"
#include "ListaEnlazada.h"
#include "NodoUsuario.h"
#include "NodoActivo.h"

using namespace std;



void menu ();
void Administrador();
void UsuariosNormales();
// CLASE DE EJEMPLO QUE SE ALMACENARA 

    Cubo *Matriz = new Cubo("Admin");
    NodoCubo *verificar; 
    NodoCubo *noodousuario;
    NodoUsuario *noodoUsuarioaux;
    Lista<NodoActivo*>* ListaActivos = new Lista<NodoActivo*>;
    Lista<NodoActivo*>* ListaTransacciones = new Lista<NodoActivo*>;
    Lista<NodoUsuario*>* ListaU= new Lista<NodoUsuario*>;
    int contadorUsuarios= 0;
    //Lista<NodoUsuario> *Usuarios;
   // ListaDobleC<NodoActivo> *Activos;
    
int main()
{
    noodoUsuarioaux = new NodoUsuario("a","a","a","a");
    ListaU->add_first(noodoUsuarioaux);
    menu();
    system("pause");

    return 0;
}

string nombreee = "",usuariooo = "",passww = "", deparr = "", empree = "";
int opcion = 0;int opcion2= 0;
void menu()
{   
    
    string todo;
    
    
    while(opcion!=2){
        cout<< ">> %%%%%%%%%%%%%%%%%%%  Renta de Activos  %%%%%%%%%%%%%%%%%%%"<<endl;
        cout<< ">> %%%%%%%%%%%%%%%%%%% 1. Iniciar Sesion  %%%%%%%%%%%%%%%%%%%"<<endl;
        cout<< ">> %%%%%%%%%%%%%%%%%%% 2. Salir           %%%%%%%%%%%%%%%%%%%"<<endl;
        cout<< ">> %%%%%%%%%%%%%%%%%%%  Ingresar Opcion:  %%%%%%%%%%%%%%%%%%%"<<endl;
        
        cin >> opcion; 

        switch (opcion)
        {
        case 1:    
                system("cls");
                verificar = 0;
                contadorUsuarios=0;
                cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
                cout<< "%%%%%%%%%%%%%%%%%%%%      Login       %%%%%%%%%%%%%%%%%%%%"<<endl;
                cout<< ">> ...Ingresar Usuario...: <<" <<endl;
                cin >> usuariooo;
                cout<< ">> ...Ingresar Contraseña...: <<" <<endl;
                cin >> passww;
                cout<< ">> ...Ingresar Departamento...: << " <<endl;
                cin >> deparr;
                cout<< ">> ...Ingresar Empresa...:  <<" <<endl;
                cin >> empree;
                noodoUsuarioaux = ListaU->get_element_at(0);
                cout<< "0";
                if(usuariooo.compare("a")==0){
                    //cout<<"1";                        
                    if(passww.compare("a")==0){
                        //ADMINISTRADOR
                        //cout<<"2"<<endl;
                        opcion2=0;
                        Administrador();
                    }
                }
                while(noodoUsuarioaux!=0){
                    
                    noodoUsuarioaux = ListaU->get_element_at(contadorUsuarios);
                    if(usuariooo.compare(noodoUsuarioaux->getname())==0){
                        //cout<<"1";                        
                        if(passww.compare(noodoUsuarioaux->getpassword())==0){
                            //cout<<"2";
                            if(deparr.compare(noodoUsuarioaux->getdepartamento())==0){
                                //cout<<"3";
                                if(empree.compare(noodoUsuarioaux->getempresa())==0){
                                    //USUARIOS NORMALES
                                }
                            }
                        }
                    }
                    contadorUsuarios++;
                }
                cout<<"3333333333";
                system("pause");
            break;
        default:
            break;

        }
    system("cls");
    }
    system("pause");

}

void Administrador(){
    while(opcion2!=9){
        cout<< "%%%%%%%%%%%%%%%%%%% Menú Administrador %%%%%%%%%%%%%%%%%%%>>"<<endl;
        cout<< "%% 1. Registrar Usuario  >>  "<<endl;
        cout<< "%% 2. Reporte Matriz Dispersa>>"  <<endl;
        cout<< "%% 3. Reporte Activos Disponibles de un Departamento>>  "<<endl;
        cout<< "%% 4. Reporte Activos Disponibles de una Empresa>>  "<<endl;
        cout<< "%% 5. Reporte Transacciones>>  "<<endl;
        cout<< "%% 6. Reporte Activos de un Usuario>>  "<<endl;
        cout<< "%% 7. Activos rentados por un Usuario>> " <<endl;
        cout<< "%% 8. Ordenar Transacciones>>"<<endl;
        cout<< "%% 9. Salir >>"<<endl;
        cout<< " ...Ingresar Opción...:>> |>>"<<endl;
        cin >> opcion2;
        switch(opcion2){
            case 1:
                cout<<"%%%%%%%%%%%%%%%%%%%%   Administrador  %%%%%%%%%%%%%%%%%%%%>>" <<endl;
                cout<<"%%%%%%%%%%%%%%%%%%%    Crear Usuario   %%%%%%%%%%%%%%%%%%%>>" <<endl;
                cout<< ">> ...Ingresar Usuario...: <<" <<endl;
                cin >> usuariooo;
                cout<< ">> ...Ingresar Contraseña...: <<" <<endl;
                cin >> passww;
                cout<< ">> ...Ingresar Departamento...: << " <<endl;
                cin >> deparr;
                cout<< ">> ...Ingresar Empresa...:  <<" <<endl;
                cin >> empree;
                noodoUsuarioaux = new NodoUsuario(usuariooo,passww,deparr,empree);
                ListaU->add_first(noodoUsuarioaux);
                noodousuario = new NodoCubo(usuariooo,passww,deparr,empree);
                Matriz->insertar_nodo_conectando(noodousuario);Matriz->GRAficar();
                system("cls");
            break;
        default:
            break;
        }
        opcion=0;
    }
    

}