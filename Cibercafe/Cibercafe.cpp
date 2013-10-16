#include <iostream>
#include <string>

#include "clases/Cibercafe.h"

using namespace std;

//El método para buscar productos
int Cibercafe::buscarProducto(string codigo_a_buscar){
    //Recorro cada posición del arrego y obtengo el objeto
    for(int i=0; i<5; i++){
        //El objeto de tipo producto esta en productos[i]

        //Si coincide el codigo del objeto, con el codigo que estoy buscando,
        //regreso su posición en el arreglo
        if(codigo_a_buscar.compare(productos[i].codigo) == 0){
            return i; //Al hacer el return se detiene todo el resto de la ejecución
        }
    }
    //Si no lo encontró regreso -1
    return -1;
}
