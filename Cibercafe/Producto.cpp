#include <iostream>
#include "clases/Producto.h"

using namespace std;

//El constructor lo uso para iniciarlizar las variables
//y evitar basura en las variables numéricas
Producto::Producto()
{
    codigo = "";
    nombre = "";
    marca = "";
    precio = 0;
    inventario = 0;
}

Producto::~Producto()
{

}

void Producto::alta(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Marca: ";
    cin >> marca;
    cout << "Precio: $";
    cin >> precio;
    cout << "Existencias: ";
    cin >> inventario;
}

void Producto::mostrar(){
    cout << "Codigo: "<< codigo << endl;
    cout << "Nombre: "<< nombre << endl;
    cout << "Marca: "<< marca << endl;
    cout << "Precio: $"<< precio << endl;
    cout << "Existencias: "<< inventario << endl;
}
