/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia  
 *	Descripcion: Archivo principal del programa
 *	Fecha: 05-Mayo-2017     
 *  Fecha de modificación: 5 de Mayo
 */
#include <iostream>
#include <string>
#include "Empleado.h"
#include "Empleadoejecutivo.h"
#include "Empleadoasistente.h"
#include "Empleadooficina.h"
#include "Empleadooperativo.h"

using namespace std;

int main(){
	Empleadoejecutivo empleado1("Juan",30,1000000,100,302);
	Empleadoejecutivo empleado2("Pedro",60,1500000,200,102);
	Empleadooficina empleado3("Alberta",40,10000,"2A","SintraStark","Pedro","realiza la contabilidad de su sección");
	Empleadooperativo empleado4("Carlos",20,50000,"4F","SintraStark","Realiza el aseo a la sección 4F");

	empleado1.mostrarEmpleadoejecutivo();
	empleado2.mostrarEmpleadoejecutivo();
	empleado3.mostrarEmpleadooficina();
	empleado4.mostrarEmpleadooperativo();

}
