#ifndef CIBERCAFE_H
#define CIBERCAFE_H

#include "Producto.h"

class Cibercafe
{
    public:
        //Mis arreglos de las clases del sistema
        Producto productos[5];

        //Recibe el codigo a buscar y me regresa la posicion
        //en la que lo encontro
        int buscarProducto(string codigo_a_buscar);
};

#endif // CIBERCAFE_H
