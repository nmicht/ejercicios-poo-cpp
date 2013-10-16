#ifndef PRODUCTO_H
#define PRODUCTO_H

using namespace std;

class Producto
{
    public:

        string codigo;
        string nombre;
        string marca;
        float precio;
        int inventario;

        Producto();
        virtual ~Producto();

        void alta();
        void modificar();
        void mostrar();
};

#endif // PRODUCTO_H
