/**
 *
 * @archivo Prestamo.cpp
 *
 */

/** Incluimos las librerias */
#include "Prestamo.h"
#include "Estudiante.h"
#include <string>

/** @brief Constructor por defecto */
Prestamo::Prestamo() {
	
}

/** @brief Constructor */
Prestamo::Prestamo(string nombre,int ident, bool estado,int valor, int dia, int mes, int anio) {

}

/** @brief Destructor */
Prestamo::~Prestamo() {
	// TODO Auto-generated destructor stub
}



/*! \brief metodo depreciacion
 *	 permite conocer el valor y estado de un articulo despues de pasar un tiempo determinado
 *
 *  \param recibe dos fechas una del articulo y la fecha actual, con estas calcula el tiempo
 *  \return valor y estado de un articulo
 */
void Prestamo::depreciacion(Fecha fecha){

	int total;		//!< variable int total, creada para saber la operacion para comparar las fechas 
	
	if (this->fecha.getAnio() == fecha.getAnio() ){
			total = (fecha.getAnio() - this->fecha.getAnio());
	
	} else	if (this->fecha.getMes() == fecha.getMes() ){
			total = (fecha.getMes() - this->fecha.getMes());
	
	} else	if (this->fecha.getDia() != fecha.getDia() ){
		
		
		/*! \brief total
	     *	 funcion para calcular el total en dias de la fecha y saber si la depreciacion 
         */
	    total=((fecha.getAnio() - this->fecha.getAnio()))*12 +(fecha.getMes()- this->fecha.getMes())*30 + (fecha.getDia() - this->fecha.getDia());
 
		   cout << total << " dias.\n\n";
	}
	    /*! \brief condicion if
	      *	 segun el total se da la condicion de depreciacion 
          */
		if (total >= 10){
		valor = 0;						//!< al cumplir la depreciacion el valor del articulo es cero (0)
		estado = "inactivo"; 			//!< al cumplir la depreciacion el estado del articulo sera "inactivo" (false)
	}
}


void Prestamo::eliminarRegistro(){
	
}



void Prestamo::consultarHistorialEstudiante(){
	
}

void Prestamo::asignarEstudiante(Estudiante* estudiante) {
	this->estudiante = estudiante;
}

