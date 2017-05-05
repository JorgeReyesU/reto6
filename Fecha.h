/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#ifndef FECHA_H
#define FECHA_H

#include "Dia.h"
#include "Mes.h"
#include "Age.h"
#include <string>
using std::string;

class Fecha{
	protected:
		Dia dia;
		Mes mes;
		Age age;
	public:
		Fecha(Dia dia, Mes mes, Age age);
		~Fecha();
		
		
		void setFecha(Dia dia, Mes mes, Age age);
			
	 
};
#endif
