/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#include "Age.h"
 
Age::Age(){
	this->Numero = 0;
	this->Siglo = 0;
	this->Biciesto = 0;
}
Age::~Age(){
}
		
int Age::getAgenum(){
	return Numero;
}

int Age::getAgesig(){
	return Siglo;
}

bool Age::getAgebic(){
	return Biciesto;
}
		
void Age::setAge(int Numero,int Siglo,bool Biciesto){
	this->Numero = Numero;
	this->Siglo = Siglo;
	this->Biciesto = Biciesto;
}
