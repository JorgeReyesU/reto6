/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Empleadoasistente.h"
#include <iostream>
#include <string>
 
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