#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Menus.h"

using namespace std;

class Usuario
{

	public:
		void iniciarSesion();
		void menuUsuario(string nombreUsuario);
		void registroUsuario();
		void imprimirUsuario(string nombreUsuario);
		void borrarUsuario(string nombreUsuario);
		void modificarUsuario(string nombreUsuario);
		void buscarUsuario(string nombreUsuario);
		void dibujarPortada(string nombreArchivo);

		private:
		string nombre, contrasena;
};

#endif // USUARIO_H
