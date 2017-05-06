#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
//---------------------Empleado------------------------------------
class Empleado{
	private:
		string nombre;
		int edad;
		int salario;
	public:
		Empleado(string, int, int);
		~Empleado();
		void mostrarEmpleado();	
	};

Empleado::Empleado(string _nombre, int _edad, int _salario){
	nombre = _nombre;
	edad = _edad;
	salario = _salario;
}

Empleado::~Empleado(){
}

void Empleado::mostrarEmpleado(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Salario: " << salario << endl;
}

//----------------Empleado Ejecutivo--------------------------------------------
class Empleadoejecutivo : public Empleado{
	private:
		int numeroEmpleadosacargo;
		int numeroOficina;
	public:
		Empleadoejecutivo(string, int, int, int, int);
		~Empleadoejecutivo();
		void mostrarEmpleadoejecutivo();	
	};

Empleadoejecutivo::Empleadoejecutivo(string _nombre, int _edad, int _salario, int _numeroEmpleadosacargo, int _numeroOficina) : Empleado(_nombre, _edad, _salario){
	numeroEmpleadosacargo = _numeroEmpleadosacargo;
	numeroOficina = _numeroOficina;
}

Empleadoejecutivo::~Empleadoejecutivo(){
}

void Empleadoejecutivo::mostrarEmpleadoejecutivo(){
	mostrarEmpleado();
	cout << "Numero de empleados a cargo: " << numeroEmpleadosacargo << endl;
	cout << "Numero de oficina: " << numeroOficina << endl;
	cout << "-----------------------------------------------" << endl;
}

//------------------Empleado asistente-------------------------------------------
class Empleadoasistente : public Empleado{
	private:
		string seccionTrabajo;
		string asociacionSindical;
	public:
		Empleadoasistente(string, int, int, string, string);
		~Empleadoasistente();
		void mostrarEmpleadoasistente();
};

Empleadoasistente::Empleadoasistente(string _nombre, int _edad, int _salario, string _seccionTrabajo, string _asociacionSindical) : Empleado(_nombre, _edad, _salario){
	seccionTrabajo = _seccionTrabajo;
	asociacionSindical = _asociacionSindical;
}

Empleadoasistente::~Empleadoasistente(){
}

void Empleadoasistente::mostrarEmpleadoasistente(){
	mostrarEmpleado();
	cout << "Seccion de trabajo: " << seccionTrabajo << endl;
	cout << "Asociacion sindical: " << asociacionSindical << endl;
}

//-------------------Empleado oficinal--------------------------------------------
class Empleadooficina : public Empleadoasistente{
	private:
		string jefe;
		string descripcionLabores;
	public:
		Empleadooficina(string, int, int, string, string, string, string);
		~Empleadooficina();
		void mostrarEmpleadooficina();
};

Empleadooficina::Empleadooficina(string _nombre, int _edad, int _salario, string _seccionTrabajo, string _asociacionSindical, string _jefe, string _descripcionLabores) : Empleadoasistente(_nombre, _edad, _salario, _seccionTrabajo, _asociacionSindical){
	jefe = _jefe;
	descripcionLabores = _descripcionLabores;
}

Empleadooficina::~Empleadooficina(){
}

void Empleadooficina::mostrarEmpleadooficina(){
	mostrarEmpleado();
	mostrarEmpleadoasistente();
	cout << "Jefe: " << jefe << endl;
	cout << "Descripcion de labores: " << descripcionLabores << endl;
	cout << "-----------------------------------------------" << endl;
}

//------------------Empleado operativo------------------------------------------
class Empleadooperativo : public Empleadoasistente{
	private:
		string descripcionActividad;
	public:
		Empleadooperativo(string, int, int, string, string, string);
		~Empleadooperativo();
		void mostrarEmpleadooperativo();
};

Empleadooperativo::Empleadooperativo(string _nombre, int _edad, int _salario, string _seccionTrabajo, string _asociacionSindical, string _descripcionActividad) : Empleadoasistente(_nombre, _edad, _salario, _seccionTrabajo, _asociacionSindical){
	descripcionActividad = _descripcionActividad;
}

Empleadooperativo::~Empleadooperativo(){
}

void Empleadooperativo::mostrarEmpleadooperativo(){
	mostrarEmpleado();
	mostrarEmpleadoasistente();
	cout << "Descripcion de actividad: " << descripcionActividad << endl;
	cout << "-----------------------------------------------" << endl;
}

//------------------Main---------------------------------------------------------
int main(){
	Empleadoejecutivo empleado1("Juan",30,1000000,100,302);
	Empleadoejecutivo empleado2("Pedro",60,1500000,200,102);
	Empleadooficina empleado3("Alberta",40,10000,"2A","SintraStark","Pedro","realiza la contabilidad de su sección");
	Empleadooperativo empleado4("Carlos",20,50000,"4F","SintraStark","Realiza el aseo a la sección 4F");

	empleado1.mostrarEmpleadoejecutivo();
	empleado2.mostrarEmpleadoejecutivo();
	empleado3.mostrarEmpleadooficina();
	empleado4.mostrarEmpleadooperativo();

}

