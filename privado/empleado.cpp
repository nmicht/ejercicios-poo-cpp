class Empleado{
	public:
		void capturar();
		void mostrar();
		string getNombre();
		int getCodigo();
	private:
		int sucursal_en_que_labora;
		int codigo;
		string nombre;
		string rfc;
		string tel;
};

class Telemex{
	public:
		Empleado empleados[100];
};

bool Telemex::buscarEmpleado(int codigo){
	if( empleados[x].getCodigo == codigo )
}
string Empleado::getNombre(){
	return nombre;
}

main(){


	Empleado juanito;

	cout << "Me llamo " << juanito.getNombre();
