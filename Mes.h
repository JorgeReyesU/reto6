/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#ifndef MES_H
#define MES_H

#include <string>
using namespace std;

class Mes{
	private:
		string Nombre;
		int Numero;
	public:
		Mes();
		~Mes();
		
		string getMes();
		int getMesnum();
		
		void setMes(string Nombre, int Numero);
	};
	#endif

