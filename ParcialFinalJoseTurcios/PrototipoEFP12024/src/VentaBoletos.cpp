#include "VentaBoletos.h"

Bitacora llamarBitacora;
/*
void VentaBoletos::VentaDeBoletos(string nombreUsuario)
{
    string userName = nombreUsuario;
    //enviarDatosC.ingresoDatosBitacora(userName,"7500","Venta");
	system("cls");
	fstream file,file1,file2;
	int found=0;
	file1.open("Cliente.txt",ios::in);
	file2.open("Peliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos buscados------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id,participant_id2;
		cout<<"\n-------------------------Ingresar Datos------------------------"<<endl;
		cout<<"\nIngrese el nombre del Cliente: ";
		cin>>participant_id;
		cout<<"\nIngrese el nombre de la Pelicula: ";
		cin>>participant_id2;
		cout<<"\nIngrese la cantidad de boletos a comprar: ";
		cin>>numBoletos;

		file1 >> nombreCliente >> nombrePeli >> precPeli, horaPeli, numBoletos, totalBoletos;
		//file2 >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
		while(!file.eof())
		{
			if(participant_id == nombreCliente && participant_id2 = nombrePeli)
			{
			    cout<<"\n\n\t\t\t Cliente: "<<nombreCliente<<endl;
				cout<<"\n\n\t\t\t Pelicula: "<<nombrePeli<<endl;
				cout<<"\n\n\t\t\t Precio: "<<precPeli<<endl;
				cout<<"\n\n\t\t\t Hora: "<<horaPeli<<endl;
				cout<<"\t\t\t Boletos: "<<numBoletos<<endl;
				totalBoletos = numBoletos*precPeli;
				cout<<"\t\t\t Total: "<<totalBoletos<<endl;
				found++;
			}
			//fil2 >> idPeli >> nombrePeli >> clasPeli >> genPeli >> subPeli >> idiomaPeli >> precPeli >> horaPeli;
           file1 >> nombreCliente >> nombrePeli >> precPeli, horaPeli, numBoletos, totalBoletos;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t No se encontro nada...";
		}
		file.close();
	}
}
*/
void VentaBoletos::VentaBoletosOp(string nombreUsuario)
{
    string userName = nombreUsuario;
    llamarBitacora.ingresoDatosBitacora(userName,"7500","VENTA");
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Ingresar Nuevo Cliente -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el nombre del cliente: ";
	cin>>nombreCliente;
	cout<<"\n\t\t\tIngresa el Nombre de la pelicula: ";
	cin>>nombrePeli;
	cout<<"\t\t\tIngresa el Precio de la Pelicula: ";
	cin>>precPeli;
	cout<<"\t\t\tIngresa la hora de la Pelicula: ";
	cin>>horaPeli;
	cout<<"\t\t\tIngresa el Numero de boletos a comprar: ";
	cin>>numBoletos;
	cout<<"\t\t\tIngresa el Numero de Total a pagar: ";
	cin>>totalBoletos;
	file.open("VentaBoletos.txt", ios::app | ios::out | ios::binary);
	file<<std::left<<std::setw(15)<< nombreCliente <<std::left<<std::setw(15)<< nombrePeli <<std::left<<std::setw(15)<< precPeli <<std::left<<std::setw(15)<< horaPeli <<std::left<<std::setw(15)<< numBoletos <<std::left<<std::setw(15)<< totalBoletos    << "\n";
	file.close();
}

void VentaBoletos::VentaBoletosTotal(string nombreUsuario){
    system("cls");
    fstream file;
    string texto;
	int total=0;
	cout<<"\n------------------------- Imprimir Informe de Totales -------------------------"<<endl;
	file.open("VentaBoletos.txt",ios::in);
    while(!file.eof())
    {
        total++;
        getline(file,texto);
        cout<<texto<<endl;
    }
    if(total==0)
    {
        cout<<"\n\t\t\tNo hay informacion...";
    }
    file.close();
	getch();
	system("pause");
}
