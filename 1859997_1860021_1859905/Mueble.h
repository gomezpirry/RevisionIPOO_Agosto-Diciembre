/**
 *
 * @archivo Mueble.h
 *
 */


/** Incluimos las librerias */
#ifndef MUEBLE_H_
#define MUEBLE_H_
#include "Articulo.h"  		

#include <iostream>

/** \namespace */
using namespace std;

/*! \@class  Mueble  
  *  \brief esta clase heredo de la calse Articulo y sera relacionada con la clase Fecha
  */
class Mueble : public Articulo {
private:				
	  Fecha fecha;		//!< relacion con la clase Fecha 
					
public:
   	 /** @brief Constructor por defecto */
	 Mueble();
		 
	 /** @brief Constructor */
	 Mueble(string nombre,int ident, bool estado,int valor, int dia, int mes, int anio);		 
	
	 /** @brief Destructor */
     ~Mueble();		
	
	 /**linea de metodos */

	
	 /*! \brief metodo depreciacion
	 *	 permite conocer el valor y estado de un articulo despues de pasar un tiempo determinado
     *
     *  \param recibe dos fechas una del articulo y la fecha actual, con estas calcula el tiempo
     *  \return valor y estado de un articulo
     */
	 void depreciacion(Fecha fecha);
	
	
};

#endif /* MUEBLE_H_ */
