/**
 *
 * @archivo Computo.h
 *
 */

/** Incluimos las librerias */
#ifndef COMPUTO_H_
#define COMPUTO_H_

#include "Articulo.h"  

#include <iostream>

/** \namespace */
using namespace std;

 /*! \@class  Computo 
  *  \brief esta clase heredo de la calse Articulo y sera relacionada con la clase Fecha
  */
class Computo : public Articulo {		
	
public:
	 /** @brief Constructor por defecto */
	 Computo();
	
	 /** @brief Constructor */
	 //Computo(string nombre,int ident, bool estado,int valor,int dia, int mes, int anio);   
	  
	/** @brief Destructor */
	 ~Computo();
	
     /**linea de metodos para acceder  */
	 void modificarInfo();
	 void cargarInfo();
	 void modificarAsignacion(); 
	
	/*! \brief metodo depreciacion
	 *	 permite conocer el valor y estado de un articulo despues de pasar un tiempo determinado
     *
     *  \param recibe dos fechas una del articulo y la fecha actual, con estas calcula el tiempo
     *  \return valor y estado de un articulo
     */
	//void depreciacion(Fecha fecha);
	
};

#endif /* COMPUTO_H_ */
