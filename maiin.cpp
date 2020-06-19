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
    NodoActivo *hiperAux; 
    int contadorUsuarios= 0;
    //Lista<NodoUsuario> *Usuarios;
   // ListaDobleC<NodoActivo> *Activos;
    
int main()
{
    noodoUsuarioaux = new NodoUsuario("a","a","a","a");
    ListaU->add_first(noodoUsuarioaux);
    hiperAux= new NodoActivo("producto1","descripcion","15","yo","alguien","0001","Guate","Max");
    ListaTransacciones->add_last(hiperAux);
    ListaActivos->add_last(hiperAux);
    menu();
    system("pause");

    return 0;
}

string nombreee = "",usuariooo = "",passww = "", deparr = "", empree = "";
int opcion = 0;int opcion2= 0,contar=0;
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
                        break;
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
                //cout<<"3333333333";
                system("pause");
            break;
        default:
            break;

        }
    system("cls");
    }
    system("pause");

}
ofstream file;int rumbo=0,can=0,q=0;string str1="",cuerpo="" , base="",nombrerepor="";
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
                Matriz->insertar_nodo_conectando(noodousuario);
                system("cls");
            break;
        case 2:
            Matriz->GRAficar();
            break;
        case 3:
            cout << "Ingresar el nombre del Departamento: "<<endl;
            nombrerepor="";
            cin >> nombrerepor;
            str1 = "dot -Tpng Reportes\\archivo3.txt -o Reportes\\Reporte3.png";
            file.open("Reportes\\archivo3.txt");
            file << "digraph G{ \n" ;
            file <<"node [shape=box]\n";
            q=0;
            cuerpo="";base ="";
            contar=0;
            while (q<ListaActivos->getSize()){
                hiperAux  = ListaActivos->get_element_at(q);
                if ((hiperAux->getDepa().compare(nombrerepor.c_str())==0))
                {
                        base = "node" + std::to_string(contar) +" [label=\""+hiperAux->getname()+"\"];\n";
                        cuerpo = cuerpo + base;
                        if(contar > 0){
                            base = "node"+ std::to_string(contar-1)+"->node"+std::to_string(contar)+";\n";
                            cuerpo = cuerpo + base;
                        } 
                        contar++;
                }
                
                
                q++;
            }
            file<<cuerpo;
            file <<"}";
            file.close();
            system(str1.c_str());
            system("Reportes\\Reporte3.png");
            break;
        case 4:
            cout << "Ingresar el nombre de la Empresa: "<<endl;
            nombrerepor="";
            cin >> nombrerepor;
            str1 = "dot -Tpng Reportes\\archivo4.txt -o Reportes\\Reporte4.png";
            file.open("Reportes\\archivo4.txt");
            file << "digraph G{ \n" ;
            file <<"node [shape=box]\n";
            q=0;
            cuerpo="";base ="";
            contar=0;
            while (q<ListaActivos->getSize()){
                hiperAux  = ListaActivos->get_element_at(q);
                if ((hiperAux->getEmpre().compare(nombrerepor.c_str())==0))
                {
                        base = "node" + std::to_string(contar) +" [label=\""+hiperAux->getname()+"\"];\n";
                        cuerpo = cuerpo + base;
                        if(contar > 0){
                            base = "node"+ std::to_string(contar-1)+"->node"+std::to_string(contar)+";\n";
                            cuerpo = cuerpo + base;
                        } 
                        contar++;
                }
                
                
                q++;
            }
            file<<cuerpo;
            file <<"}";
            file.close();
            system(str1.c_str());
            system("Reportes\\Reporte4.png");
            break;
        case 5:
                rumbo=0;can=0;q=0;rumbo=0;can=0;q=0;
                while(ListaTransacciones->getSize()>0){
                    str1 = "dot -Tpng Reportes\\archivo_queue.txt -o Reportes\\Reporte_queue.png";
                    file.open("Reportes\\archivo_queue.txt");
                    file << "digraph G{ \n" ;
                    file <<"node [shape=box]\n";
                    q=0;
                    cuerpo="";base ="";

                    while (q<ListaTransacciones->getSize()){
                        hiperAux  = ListaTransacciones->get_element_at(q);
                        if(q==can){
                            base = "node" + std::to_string(q) +" [label=\""+hiperAux->getname()+" \" , width = 1.5, style = filled, fillcolor = firebrick1,];\n";
                        }
                        else 
                        {
                            base = "node" + std::to_string(q) +" [label=\""+hiperAux->getname()+" \"];\n";
                        }
                        cuerpo = cuerpo + base;
                        if(ListaTransacciones->get_element_at(q-1)!=0){
                            base = "node"+ std::to_string(q-1)+"->node"+std::to_string(q)+"[dir=back];\n";
                            cuerpo = cuerpo + base;
                            base = "node"+ std::to_string(q-1)+"->node"+std::to_string(q)+";\n";
                            cuerpo = cuerpo + base;
                            
                        }
                        q++;
                        if(q==ListaTransacciones->getSize()){
                            cuerpo = cuerpo +"\n node0 -> node"+std::to_string(q-1)+"[dir=back];\n";
                            cuerpo = cuerpo +"\n node0 -> node"+std::to_string(q-1)+";\n";
                        }
                    }
                    file<<cuerpo;
                    file <<"}";
                    file.close();
                    system(str1.c_str());
                    system("Reportes\\Reporte_queue.png");
                    break;   

                }
            break;
        case 6:
            cout << "Ingresar el nombre del Usuario: "<<endl;
            nombrerepor="";
            cin >> nombrerepor;
            str1 = "dot -Tpng Reportes\\archivo6.txt -o Reportes\\Reporte6.png";
            file.open("Reportes\\archivo6.txt");
            file << "digraph G{ \n" ;
            file <<"node [shape=box]\n";
            q=0;
            cuerpo="";base ="";
            contar=0;
            while (q<ListaActivos->getSize()){
                hiperAux  = ListaActivos->get_element_at(q);
                if ((hiperAux->getpropietario().compare(nombrerepor.c_str())==0))
                {
                        base = "node" + std::to_string(contar) +" [label=\""+hiperAux->getname()+"\"];\n";
                        cuerpo = cuerpo + base;
                        if(contar > 0){
                            base = "node"+ std::to_string(contar-1)+"->node"+std::to_string(contar)+";\n";
                            cuerpo = cuerpo + base;
                        } 
                        contar++;
                }
                
                
                q++;
            }
            file<<cuerpo;
            file <<"}";
            file.close();
            system(str1.c_str());
            system("Reportes\\Reporte6.png");
            break;
        case 7:
            cout << "Ingresar el nombre del Usuario: "<<endl;
            nombrerepor="";
            cin >> nombrerepor;
            str1 = "dot -Tpng Reportes\\archivo7.txt -o Reportes\\Reporte7.png";
            file.open("Reportes\\archivo7.txt");
            file << "digraph G{ \n" ;
            file <<"node [shape=box]\n";
            q=0;
            cuerpo="";base ="";
            contar=0;
            while (q<ListaActivos->getSize()){
                hiperAux  = ListaActivos->get_element_at(q);
                if ((hiperAux->getComprador().compare(nombrerepor.c_str())==0))
                {
                        base = "node" + std::to_string(contar) +" [label=\""+hiperAux->getname()+"\"];\n";
                        cuerpo = cuerpo + base;
                        if(contar > 0){
                            base = "node"+ std::to_string(contar-1)+"->node"+std::to_string(contar)+";\n";
                            cuerpo = cuerpo + base;
                        } 
                        contar++;
                }
                
                
                q++;
            }
            file<<cuerpo;
            file <<"}";
            file.close();
            system(str1.c_str());
            system("Reportes\\Reporte7.png");
            break;
        case 8:
            break;
        default:
            break;
        }
    }
    

}