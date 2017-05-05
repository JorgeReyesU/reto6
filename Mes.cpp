/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Mes.h"
 
Mes::Mes(){
	this->Nombre = "ninguno";
	this->Numero = 0;
}
Mes::~Mes(){
}
		
string Mes::getMes(){
	return Nombre;
}

int Mes::getMesnum(){
	return Numero;
}
		
void Mes::setMes(string Nombre, int Numero){
	this->Nombre = Nombre;
	this->Numero = Numero;
}
