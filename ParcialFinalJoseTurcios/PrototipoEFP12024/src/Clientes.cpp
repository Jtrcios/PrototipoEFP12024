#include "Clientes.h"

Bitacora enviarDatosC;
Menus traerMenuCa;
void Clientes::menuClientes(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
            system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Clientes |";
    cout << "\n\t\t\t---------------------------------"<<endl;

    cout<<"\t\t\t 1. Registrar Clientes"<<endl;
	cout<<"\t\t\t 2. Imprimir Clientes"<<endl;
	cout<<"\t\t\t 3. Modificar Clientes"<<endl;
	cout<<"\t\t\t 4. Buscar Clientes"<<endl;
	cout<<"\t\t\t 5. Borrar Clientes"<<endl;
	cout<<"\t\t\t 6. Regresar"<<endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4] - [5] - [6]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
    registroCliente(userName);
    system("cls");

                break;
    }

    case 2:{
        system("cls");
        imprimirCliente(userName);
    break;
    }
    case 3:{
        system("cls");
        modificarCliente(userName);
        break;
        }
    case 4:
        system("cls");
       buscarCliente(userName);
        break;
    case 5:
        system("cls");
       borrarCliente(userName);
        break;
    case 6:
        system("cls");
       traerMenuCa.menuCatalogos(userName);
        break;
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=6);
}
void Clientes::registroCliente(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosC.ingresoDatosBitacora(userName,"7100","INS");
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Ingresar Nuevo Cliente -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el ID del cliente: ";
	cin>>idCliente;
	cout<<"\n\t\t\tIngresa el Nombre del cliente: ";
	cin>>nombreCliente;
	cout<<"\t\t\tIngresa el NIT del cliente: ";
	cin>>nitCliente;
	file.open("Cliente.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(15)<< idCliente <<std::left<<std::setw(15)<< nombreCliente <<std::left<<std::setw(15)<< nitCliente << "\n";
	file.close();
}

void Clientes::modificarCliente(string nombreUsuario)
{
string userName = nombreUsuario;
enviarDatosC.ingresoDatosBitacora(userName,"7110","MOD");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Clientes-------------------------"<<endl;
	file.open("Cliente.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Cliente que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idCliente >> nombreCliente >> nitCliente;
		while(!file.eof())
		{
			if(participant_id!=idCliente)
			{
			 file1<<std::left<<std::setw(15)<< idCliente <<std::left<<std::setw(15)<< nombreCliente <<std::left<<std::setw(15)<< nitCliente << "\n";
			}
			else
			{
				cout<<"\t\t\tIngresa Id del Cliente            : ";
                cin>>idCliente;
                cout<<"\t\t\tIngresa Nombre del Cliente        : ";
                cin>>nombreCliente;
                cout<<"\t\t\tIngresa eñ Nit del Cliente      : ";
                cin>>nitCliente;

				file1<<std::left<<std::setw(15)<< idCliente <<std::left<<std::setw(15)<< nombreCliente <<std::left<<std::setw(15)<< nitCliente << "\n";
				found++;
			}
			file >> idCliente >> nombreCliente >> nitCliente;

		}
		file1.close();
		file.close();
		remove("Cliente.txt");
		rename("Record.txt","Cliente.txt");
	}
}

void Clientes::imprimirCliente(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosC.ingresoDatosBitacora(userName,"7120","IMP");
    system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Clientes -------------------------"<<endl;
	file.open("Cliente.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idCliente >> nombreCliente >> nitCliente;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id: "<<idCliente<<endl;
			cout<<"\t\t\t nombre: "<<nombreCliente<<endl;
			cout<<"\t\t\t Nit: "<<nitCliente<<endl;
			file >> idCliente >> nombreCliente >> nitCliente;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	system("pause");
	file.close();
}
void Clientes::buscarCliente(string nombreUsuario)
{
    string userName = nombreUsuario;
                enviarDatosC.ingresoDatosBitacora(userName,"7130","SRC");
	system("cls");
	fstream file;
	int found=0;
	file.open("Cliente.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Cliente buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Cliente buscado------------------------"<<endl;
		cout<<"\nIngrese el ID del cliente que deseebuscar: ";
		cin>>participant_id;
		file >> idCliente >> nombreCliente >> nitCliente;
		while(!file.eof())
		{
			if(participant_id==idCliente)
			{
			    cout<<"\n\n\t\t\t Id: "<<idCliente<<endl;
				cout<<"\n\n\t\t\t Nombre: "<<nombreCliente<<endl;
				cout<<"\t\t\t Nit: "<<nitCliente<<endl;
				found++;
			}
            file >> idCliente >> nombreCliente >> nitCliente;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Cliente no encontrado...";
		}
		file.close();
	}
}
void Clientes::borrarCliente(string nombreUsuario)
{
    string userName = nombreUsuario;
                enviarDatosC.ingresoDatosBitacora(userName,"7140","DEL");
	system("cls");
	fstream file,file1;
	string id;
	int found=0;
	cout<<"\n------------------------- Borrar Cliente -------------------------"<<endl;
	file.open("Cliente.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
	    cout<<"\n Ingrese el Id para borrar: ";
		cin>>id;
		file1.open("Record.txt",ios::app | ios::out);
        file >> idCliente >> nombreCliente >> nitCliente;
		while(!file.eof())
		{
			if(id!= idCliente)
			{
				file1<<std::left<<std::setw(15)<< idCliente <<std::left<<std::setw(15)<< nombreCliente <<std::left<<std::setw(15)<< nitCliente << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de Usuario exitoso";
			}
			file >> idCliente >> nombreCliente >> nitCliente;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("Cliente.txt");
		rename("Record.txt","Cliente.txt");
		exit(0);
	}
}
