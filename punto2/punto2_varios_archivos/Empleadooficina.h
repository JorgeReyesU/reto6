/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 5 de Mayo
 */
#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H

#include <string>
using namespace std;

class Empleadooficina : public Empleadoasistente{
	private:
		string jefe;
		string descripcionLabores;
	public:
		Empleadooficina(string, int, int, string, string, string, string);
		~Empleadooficina();
		void mostrarEmpleadooficina();
};
	#endif