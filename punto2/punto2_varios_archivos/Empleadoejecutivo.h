/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 5 de Mayo
 */
#ifndef EMPLEADOEJECUTIVO_H
#define EMPLEADOEJECUTIVO_H

#include <string>
using namespace std;

class Empleadoejecutivo : public Empleado{
	private:
		int numeroEmpleadosacargo;
		int numeroOficina;
	public:
		Empleadoejecutivo(string, int, int, int, int);
		~Empleadoejecutivo();
		void mostrarEmpleadoejecutivo();	
	};
	#endif