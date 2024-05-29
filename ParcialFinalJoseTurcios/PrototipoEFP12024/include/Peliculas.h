#ifndef PELICULAS_H
#define PELICULAS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Bitacora.h"
#include "Menus.h"

using namespace std;

class Peliculas
{
    public:
        void menuPeliculas(string nombreUsuario);
        void registroPeliculas(string nombreUsuario);
        void modificarPeliculas(string nombreUsuario);
        void imprimirPeliculas(string nombreUsuario);
        void buscarPeliculas(string nombreUsuario);
        void borrarPeliculas(string nombreUsuario);

    protected:

    private:
        string idPeli, nombrePeli, clasPeli, genPeli, subPeli, idiomaPeli, precPeli, horaPeli;
};

#endif // PELICULAS_H
