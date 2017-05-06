/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 5 de Mayo
 */
#ifndef EMPLEADOOPERATIVO_H
#define EMPLEADOOPERATIVO_H

#include <string>
using namespace std;

class Empleadooperativo : public Empleadoasistente{
	private:
		string descripcionActividad;
	public:
		Empleadooperativo(string, int, int, string, string, string);
		~Empleadooperativo();
		void mostrarEmpleadooperativo();
};
	#endif