#include <iostream>
#include <cstdlib>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Usuario.h"

Usuario llamaPortada;
using namespace std;

int main()
{
    llamaPortada.dibujarPortada("Portada.txt");
    Usuario IngresoUsuario;
    int numero;
    do
    {
    system("cls");
    cout<<"\t\t\t------------------------------------------"<<endl;
	cout<<"\t\t\t|        Bienvenido a Securitas      |"<<endl;
	cout<<"\t\t\t------------------------------------------"<<endl;
	cout<<"\n\t\t\t 1. Iniciar sesion "<<endl;
	cout<<"\t\t\t 2. Registrar nuevo Usuario"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;

    cout << "\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3]  |";
    cout << "\n\t\t\t---------------------------------------";

	cout<< " "<<endl;
	cout<<"\n\n\t\t\tingrese una opcion: ";
	cin>>numero;

        switch(numero)
        {
            case 1:
                IngresoUsuario.iniciarSesion();
                break;

            case 2:
                IngresoUsuario.registroUsuario();
                break;

            case 3:
                exit(0);
                break;

            default:
                cout<<"\t\t\tIngrese opcion valida"<<endl;
                cin.get();
        }
    } while(numero!= 3);


    return 0;
}
