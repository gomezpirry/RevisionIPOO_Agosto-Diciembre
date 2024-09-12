/**
 *
 * @archivo Computo.cpp
 *
 */

/** Incluimos las librerias */
#include "Computo.h"
#include "Fecha.h"
#include <string>
#include <cstdlib>

/** @brief Constructor por defecto */
Computo::Computo() {
  
}

/** @brief Constructor */
//Computo::Computo(string nombre, int ident, bool estado, int valor, int dia, int mes, int anio) : Articulo(nombre, ident, estado, valor, dia, mes, anio){
//	this->nombre=nombre;
//	this->ident=ident;
//	this->estado=estado;
//	this->valor=valor;
//}

/** @brief Destructor */
Computo::~Computo() {
	
}


/*! \brief metodo depreciacion
	 *	 permite conocer el valor y estado de un articulo despues de pasar un tiempo determinado
     *
     *  \param recibe dos fechas una del articulo y la fecha actual, con estas calcula el tiempo
     *  \return valor y estado de un articulo
     */
//void Computo::depreciacion(Fecha fecha){
//
//	int total;  //!< variable int total, creada para saber la operacion para comparar las fechas 
//	
//	if (this->fecha.getAnio() != fecha.getAnio() ){
//			total = (fecha.getAnio() - this->fecha.getAnio());
//	
//	} else	if (this->fecha.getMes() != fecha.getMes() ){
//			total = (fecha.getMes() - this->fecha.getMes());
//	
//	} else	if (this->fecha.getDia() != fecha.getDia() ){
//		
//		/*! \brief total
//	     *	 funcion para calcular el total en dias de la fecha y saber si la depreciacion 
//         */
//	    total=((fecha.getAnio() - this->fecha.getAnio()))*12 +(fecha.getMes()- this->fecha.getMes())*30 + (fecha.getDia() - this->fecha.getDia());
// 
//		   cout << total << " dias.\n\n";
//	}
//	    /*! \brief condicion if
//	     *	 segun el total se da la condicion de depreciacion 
//         */
//		if (total >= 10){
//		valor = 0;                //!< al cumplir la depreciacion el valor del articulo es cero (0)
//		estado = "inactivo";      //!< al cumplir la depreciacion el estado del articulo sera "inactivo" (false)
//	}
//}
//

void Computo::modificarAsignacion(){
	
}

void Computo::modificarInfo(){
	
}







