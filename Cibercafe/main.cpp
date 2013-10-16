#include <iostream>
#include <string>
#include "clases/Cibercafe.h"

using namespace std;

int main(){
    //Creo el objeto de mi programa
    Cibercafe programa;

    //Declaro las variables que se van a necesitar
    int pos;
    string algo;


    //Aquí debería ir un menú que si se elige buscar
    //Me lleve a esto que esta aquí escrito
    cout << "Que codigo quieres buscar ";
    cin >> algo;
    //A mi programa le digo que busque el producto
    //y me regresa la posición en la que la encontró
    pos = programa.buscarProducto(algo);

    //Si lo encontró, lo muestro
    if(pos>=0){
        programa.productos[pos].mostrar();
    }





    return 0;

}
