#ifndef VENTABOLETOS_H
#define VENTABOLETOS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Bitacora.h"
#include "Usuario.h"
#include "Clientes.h"
#include "Peliculas.h"

using namespace std;

class VentaBoletos
{
    public:
       // void VentaDeBoletos(string nombreUsuario);
        void VentaBoletosOp(string nombreUsuario);
        void VentaBoletosTotal(string nombreUsuario);

    protected:

    private:
        string nombreCliente, nombrePeli, precPeli, horaPeli, numBoletos, totalBoletos;
};

#endif // VENTABOLETOS_H
