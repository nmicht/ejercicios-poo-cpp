#include <iostream>

using namespace std;

class Una{
	//objeto, tiene acceso a sus métodos
	public:
		void guardar_a(int x);
		int obtener_a();
	//la clase tiene acceso
	private:
		int a;
		int sumar_a_a(int b);
};

void Una::seta(int x){
	a = x;
}

int Una::geta(){
	return a;
}

int Una::sumar_a_a(int b){
	a = a+b;
	return a;
}

class Dos{
	public: 
		int d;
		Una objetoUna;
};

int main(){
	Una objeto;
	Dos otro;

	//otro.guardar_a()
	
	//No se puedo porque a es privado
	//objeto.a = 5;

	//objeto.guardar_a(10);

	//cout << objeto.obtener_a();

	otro.objetoUna.guardar_a(10);
	otro.guardar_a()
}
	
