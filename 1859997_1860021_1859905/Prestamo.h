/**
 *
 * @archivo Prestamo.h
 *
 */

/** Incluimos las librerias */
#ifndef PRESTAMO_H_
#define PRESTAMO_H_

#include "Articulo.h"
#include "Estudiante.h"

#include <iostream>

/** \namespace */
using namespace std;

 /*! \@class  Prestamo  
  *  \brief esta clase heredo de la calse Articulo y sera relacionada con la clase Fecha
  */
class Prestamo : public Articulo {
private:
	 int tiempo;		                      //!< atributo establecido para tiempo de prestamo 
	 Fecha fecha;						  //!<  relacion con la clase Fecha
	 Estudiante* estudiante;				  //!< relacion con la clase Estudiante

public:
	 /** @brief Constructor por defecto */
	 Prestamo();
	 
	 /** @brief Constructor */
     Prestamo(string nombre,int ident, bool estado,int valor, int dia, int mes, int anio);  	
	 
	 /** @brief Destructor */
	 ~Prestamo();
	
     /**linea de metodos para acceder */
	 void modificarInfo();
	 void cargarInfo();
	 void eliminarRegistro();
	 void asignarEstudiante();
	
	 void modificarAsignacion();
	 void consultarHistorialPrestamo();
	 void consultarHistorialEstudiante();
	
	 void asignarEstudiante(Estudiante* estudiante);
	 
	
	 /*! \brief metodo depreciacion
	 *	 permite conocer el valor y estado de un articulo despues de pasar un tiempo determinado
     *
     *  \param recibe dos fechas una del articulo y la fecha actual, con estas calcula el tiempo
     *  \return valor y estado de un articulo
     */
	 void depreciacion(Fecha fecha); 
	
};

#endif /* PRESTAMO_H_ */
