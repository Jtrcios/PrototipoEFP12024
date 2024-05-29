#ifndef CLIENTES_H
#define CLIENTES_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Bitacora.h"
#include "Menus.h"
using namespace std;


class Clientes
{
    public:
        void menuClientes(string nombreUsuario);
        void registroCliente(string nombreUsuario);
        void modificarCliente(string nombreUsuario);
        void imprimirCliente(string nombreUsuario);
        void buscarCliente(string nombreUsuario);
        void borrarCliente(string nombreUsuario);

    protected:

    private:
        string idCliente, nombreCliente, nitCliente;
};

#endif // CLIENTES_H
