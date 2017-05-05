/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 29 de Abril
 */
#include "Dia.h"
 
Dia::Dia(){
	this->Nombre = "ninguno";
	this->Numero = 0;
}
Dia::~Dia(){
}
		
string Dia::getDia(){
	return Nombre;
}

int Dia::getNumero(){
	return Numero;
}
		
void Dia::setDia(string Nombre, int Numero){
	this->Nombre = Nombre;
	this->Numero = Numero;
}
	
