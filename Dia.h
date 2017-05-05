/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */

#ifndef DIA_H
#define DIA_H

#include <string>
using namespace std;

class Dia{
	private:
		string Nombre;
		int Numero;
	public:
		Dia();
		~Dia();
		
		string getDia();
		int getNumero();
		
		void setDia(string Nombre, int Numero);
	};
	#endif
