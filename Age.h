/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 4 de Mayo
 */
#ifndef AGE_H
#define AGE_H

#include <string>
using namespace std;

class Age{
	private:
		int Numero;
		int Siglo;
		bool Biciesto;
	public:
		Age();
		~Age();
		
		int getAgenum();
		int getAgesig();
		bool getAgebic();
		
		void setAge(int Numero,int Siglo,bool Biciesto);
	};
	#endif
