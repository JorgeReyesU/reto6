/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 5 de Mayo
 */
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

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
	#endif
