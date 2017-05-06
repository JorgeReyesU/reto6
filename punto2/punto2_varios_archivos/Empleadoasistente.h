/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 5 de Mayo
 */
#ifndef EMPLEADOASISTENTE_H
#define EMPLEADOASISTENTE_H

#include <string>
using namespace std;

class Empleadoasistente : public Empleado{
	private:
		string seccionTrabajo;
		string asociacionSindical;
	public:
		Empleadoasistente(string, int, int, string, string);
		~Empleadoasistente();
		void mostrarEmpleadoasistente();
};
	#endif