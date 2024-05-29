#include "Menus.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <ctime>

Peliculas traerMenuPeli;
Clientes traerMenuC;
Usuario traerMenu;
Bitacora imprimirBitacora;
VentaBoletos traerMenuBoletos;

void Menus::menuInicial(string nombreUsuario)
{
    string userName = nombreUsuario;
    //system("cls");
    int optEscoger = 0;
    bool repetir = true;
    do
    {
    system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451                    |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t---------------------------------------------\n";
    cout << "\t\t\t|        Bienvenido al Sistema de Securitas     |";
    cout << "\n\t\t\t-----------------------------------------------"<<endl;

    cout << "\n\t\t\t1. Menu Catalogos"<<endl;
    cout << "\t\t\t2. Menu Procesos"<<endl;
    cout << "\t\t\t3. Menu de Reportes"<<endl;
    cout << "\t\t\t4. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
       menuCatalogos(userName);
        break;
    }

    case 2:{
        system("cls");
        menuProcesos(userName);
    break;
    }
    case 3:{
        system("cls");
        subMenuInformes(userName);
        break;
        }
    case 4:{
             exit(0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=4);
}

void Menus::menuCatalogos(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
            system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451   |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Catalogos |";
    cout << "\n\t\t\t---------------------------------"<<endl;

    cout << "\n\t\t\t1. Informes "<<endl;
    cout << "\t\t\t2. Seguridad "<<endl;
    cout << "\t\t\t3. Regresar" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
    traerMenuC.menuClientes(userName);
       system("cls");

                break;
    }

    case 2:{
        system("cls");
        traerMenuPeli.menuPeliculas(userName);
    break;
    }
    case 3:{
        system("cls");
    menuInicial(userName);
        break;
        }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=3);
}

void Menus::subMenuInformes(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
    system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451   |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t|   Bienvenido al Menu de Reportes  |";
    cout << "\n\t\t\t-----------------------------------"<<endl;

    cout << "\n\t\t\t1. Bitacora"<<endl;
    cout << "\t\t\t2. Usuarios"<<endl;
    cout << "\t\t\t3. Regresar" << endl;
    cout << "\n\n\t\t\t------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3]";
    cout << "\n\t\t\t--------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
       imprimirBitacora.imprimirDatosBitacora();
    break;
    }

    case 2:{
        system("cls");
            traerMenu.menuUsuario(userName);
    break;
    }
    case 3:
        menuInicial(userName);
        break;

    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=3);
}

void Menus::menuProcesos(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
  bool repetir = true;
    do
    {
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451                    |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Procesos |";
    cout << "\n\t\t\t---------------------------------"<<endl;
    cout << "\t\t\t1. Informes"<<endl;
     cout << "\t\t\t2. Mostrar totales"<<endl;
    cout << "\t\t\t3. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]- [5]- [6]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {

    case 1:{
       system("cls");
       VentaBoletos menBoletos;
       menBoletos.VentaBoletosOp(userName);
       system("pause");
                break;
    }

    case 2:{
        system("cls");
        VentaBoletos mensBoletos;
       mensBoletos.VentaBoletosTotal(userName);
        system("cls");
        system("pause");

    break;
    }
    case 3:{
        system("cls");
        menuCatalogos(userName);
        system("pause");
        break;
        }
    }
    }while(optEscoger!=3);
}
