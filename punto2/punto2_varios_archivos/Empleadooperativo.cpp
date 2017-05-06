/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Empleadooperativo.h"
#include <iostream>
#include <string>
 
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