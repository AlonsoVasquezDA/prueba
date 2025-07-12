#include<iostream>
#include<string>
using namespace std;

struct CORREO {
    string user;
    string domain;
};

struct CUENTA {
    string numcuenta;
    string contra;
    double din;
};

struct DATOS {
    string nom;
    int    edad;
    string dni;
    string celular;
    CORREO correo;
    CUENTA cuenta;
};


int main (){
     int op;
     do{
        system("cls"); 
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"---------------BIENVENIDO A BANCO BCHP-----------------"<<endl<<endl;
        cout<<" 1.- Crear una cuenta. "<<endl;
        cout<<" 2.- Ingresar una cuenta. "<<endl;
        cout<<" 3.- Salir."<<endl<<endl;
        cout<<"Ingrese una de las opciones: ";
        cout<<endl;
        cin>>op;
        cin.ignore();
        switch (op){
            case 1: 
                   break;
            case 2:
                   break;
            case 3: 
                   char ops;
                   cout<<" Estas seguro de salir? (S/N)"<<endl;
                   cin>>ops;
                   if (ops == 'S' || ops == 's' ){
                      op = 3;
                      cout<<"Gracias por confiar en el BANCO BCHP. HASTA PRONTO."<<endl;
                   } else {
                      op = -1;
                   }
                   break;     
            default :
                   cout<<"Opcion invalida."<<endl;
                   system ("pause");
                   break;
        }
     } while (op != 3);
     return 0;
}
