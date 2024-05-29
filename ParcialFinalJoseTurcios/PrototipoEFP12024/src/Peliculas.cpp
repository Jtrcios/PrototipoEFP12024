#include "Peliculas.h" //Base utilizada de otro proyecto realizado con anterioridad; Por falta de tiempo no se pudo cambiar Peliculas por Informes

Bitacora enviarDatosP;
Menus traerMenuCat;
void Peliculas::menuPeliculas(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
            system("cls");
	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|    José Turcios 9959-22-4451                    |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Informes |";
    cout << "\n\t\t\t---------------------------------"<<endl;

    cout<<"\t\t\t 1. Registrar Informe"<<endl;
	cout<<"\t\t\t 2. Imprimir Informe"<<endl;
	cout<<"\t\t\t 3. Modificar Informe"<<endl;
	cout<<"\t\t\t 4. Buscar Informe"<<endl;
	cout<<"\t\t\t 5. Borrar Informe"<<endl;
	cout<<"\t\t\t 6. Regresar"<<endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4] - [5] - [6]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
    registroPeliculas(userName);
    system("cls");

                break;
    }

    case 2:{
        system("cls");
        imprimirPeliculas(userName);
    break;
    }
    case 3:{
        system("cls");
        modificarPeliculas(userName);
        break;
        }
    case 4:
        system("cls");
       buscarPeliculas(userName);
        break;
    case 5:
        system("cls");
       borrarPeliculas(userName);
        break;
    case 6:
        system("cls");
       traerMenuCat.menuCatalogos(userName);
        break;
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(optEscoger!=6);
}
void Peliculas::registroPeliculas(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosP.ingresoDatosBitacora(userName,"7200","INS");
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Ingresar Nuevo Informe -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el ID del Informe: ";
	cin>>idPeli;
	cout<<"\n\t\t\tIngresa el Nombre del Informe: ";
	cin>>nombrePeli;
	cout<<"\t\t\tIngresa la clasificacion del Informe (tipo A,B,C,D; A es el mas urgente): ";
	cin>>clasPeli;
	cout<<"\t\t\tIngresa el Razon del Informe: ";
	cin>>genPeli;
	cout<<"\t\t\tIngresa algun Sub-titulo al Informe (N/A si no lo desea): ";
	cin>>subPeli;
	cout<<"\t\t\tIngresa el area del Informe a realizar: ";
	cin>>idiomaPeli;
	cout<<"\t\t\tIngresa el Nombre de la persona que registro el Informe: ";
	cin>>precPeli;
	cout<<"\t\t\tIngresa la hora de registro del Informe: ";
	cin>>horaPeli;
	file.open("Informes.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(15)<< idPeli <<std::left<<std::setw(15)<< nombrePeli <<std::left<<std::setw(15)<< clasPeli <<std::left<<std::setw(15)<< genPeli <<std::left<<std::setw(15)<< subPeli <<std::left<<std::setw(15)<< idiomaPeli<<std::left<<std::setw(15)<< precPeli <<std::left<<std::setw(15)<< horaPeli << "\n";
	file.close();
}

void Peliculas::modificarPeliculas(string nombreUsuario)
{
string userName = nombreUsuario;
enviarDatosP.ingresoDatosBitacora(userName,"7210","MOD");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Informe-------------------------"<<endl;
	file.open("Informes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Informe que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		while(!file.eof())
		{
			if(participant_id!=idPeli)
			{
			 file1<<std::left<<std::setw(15)<< idPeli <<std::left<<std::setw(15)<< nombrePeli <<std::left<<std::setw(15)<< clasPeli <<std::left<<std::setw(15)<< genPeli <<std::left<<std::setw(15)<< subPeli <<std::left<<std::setw(15)<< idiomaPeli<<std::left<<std::setw(15)<< precPeli <<std::left<<std::setw(15)<< horaPeli << "\n";
			}
			else
			{
					cout<<"\n\t\t\tIngresa el ID del Informe: ";
                    cin>>idPeli;
                    cout<<"\n\t\t\tIngresa el Nombre del Informe: ";
                    cin>>nombrePeli;
                    cout<<"\t\t\tIngresa la clasificacion del Informe (tipo A,B,C,D; A es el mas urgente): ";
                    cin>>clasPeli;
                    cout<<"\t\t\tIngresa el Razon del Informe: ";
                    cin>>genPeli;
                    cout<<"\t\t\tIngresa algun Sub-titulo al Informe (N/A si no lo desea): ";
                    cin>>subPeli;
                    cout<<"\t\t\tIngresa el area del Informe a realizar:  ";
                    cin>>idiomaPeli;
                    cout<<"\t\t\tIngresa el Nombre de la persona que registro el Informe: ";
                    cin>>precPeli;
                    cout<<"\t\t\tIngresa la hora de registro del informe: ";
                    cin>>horaPeli;

				file1<<std::left<<std::setw(15)<< idPeli <<std::left<<std::setw(15)<< nombrePeli <<std::left<<std::setw(15)<< clasPeli <<std::left<<std::setw(15)<< genPeli <<std::left<<std::setw(15)<< subPeli <<std::left<<std::setw(15)<< idiomaPeli<<std::left<<std::setw(15)<< precPeli <<std::left<<std::setw(15)<< horaPeli << "\n";
				found++;
			}
			file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		}
		file1.close();
		file.close();
		remove("Informes.txt");
		rename("Record.txt","Informes.txt");
	}
}

void Peliculas::imprimirPeliculas(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosP.ingresoDatosBitacora(userName,"7220","IMP");
    system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Informes -------------------------"<<endl;
	file.open("Informes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id: "<<idPeli<<endl;
			cout<<"\t\t\t Nombre: "<<nombrePeli<<endl;
			cout<<"\t\t\t Clasificacion: "<<clasPeli<<endl;
			cout<<"\n\n\t\t\t Razon: "<<genPeli<<endl;
			cout<<"\n\n\t\t\t Sub-titulos: "<<subPeli<<endl;
			cout<<"\n\n\t\t\t Area: "<<idiomaPeli<<endl;
			cout<<"\n\n\t\t\t Registrado por: "<<precPeli<<endl;
			cout<<"\n\n\t\t\t A las: "<<horaPeli<<"Horas"<<endl;
			file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	system("pause");
	file.close();
}
void Peliculas::buscarPeliculas(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosP.ingresoDatosBitacora(userName,"7230","SRC");
	system("cls");
	fstream file;
	int found=0;
	file.open("Informes.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de Informes buscados------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos de Informes buscados------------------------"<<endl;
		cout<<"\nIngrese el ID del Informe que desee buscar: ";
		cin>>participant_id;
		file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		while(!file.eof())
		{
			if(participant_id==idPeli)
			{
			cout<<"\n\n\t\t\t Id: "<<idPeli<<endl;
			cout<<"\t\t\t Nombre: "<<nombrePeli<<endl;
			cout<<"\t\t\t Clasificacion: "<<clasPeli<<endl;
			cout<<"\n\n\t\t\t Razon: "<<genPeli<<endl;
			cout<<"\n\n\t\t\t Sub-titulos: "<<subPeli<<endl;
			cout<<"\n\n\t\t\t Area: "<<idiomaPeli<<endl;
			cout<<"\n\n\t\t\t Registrado por: "<<precPeli<<endl;
			cout<<"\n\n\t\t\t A las: "<<horaPeli<<"Horas"<<endl;
				found++;
			}
            file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Informe no encontrada...";
		}
		file.close();
	}
}
void Peliculas::borrarPeliculas(string nombreUsuario)
{
    string userName = nombreUsuario;
                enviarDatosP.ingresoDatosBitacora(userName,"7240","DEL");
	system("cls");
	fstream file,file1;
	string id;
	int found=0;
	cout<<"\n------------------------- Borrar Informes -------------------------"<<endl;
	file.open("Informes.txt",ios::in);
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
       file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		while(!file.eof())
		{
			if(id!= idPeli)
			{
				file1<<std::left<<std::setw(15)<< idPeli <<std::left<<std::setw(15)<< nombrePeli <<std::left<<std::setw(15)<< clasPeli <<std::left<<std::setw(15)<< genPeli <<std::left<<std::setw(15)<< subPeli <<std::left<<std::setw(15)<< idiomaPeli<<std::left<<std::setw(15)<< precPeli <<std::left<<std::setw(15)<< horaPeli << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de Usuario exitoso";
			}
			file >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("Informes.txt");
		rename("Record.txt","Informes.txt");
		exit(0);
	}
}
