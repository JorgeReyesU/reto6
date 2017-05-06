/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Empleadoejecutivo.h"
#include <iostream>
#include <string>
 
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
