/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Empleadooficina.h"
#include <iostream>
#include <string>
 
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