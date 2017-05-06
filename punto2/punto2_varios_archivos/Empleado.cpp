/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */

#include "Empleado.h"
#include <iostream>
#include <string>
 
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


		
