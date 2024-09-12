/**
 *
 * @archivo Articulo.h
 *
 */

/** Incluimos las librerias */
 
#ifndef ARTICULO_H_
#define ARTICULO_H_
#include "Fecha.h"
#include "Profesor.h"
#include "Estudiante.h"
#include <iostream>

/** \namespace */
using namespace std;

 /*! \@class  Articulo
  *  \brief esta clase contara con relaciones de otras clases Fecha, Profesor, Estudiante 
  */
class Articulo {
protected:
		string nombre;   	    	//!< Nombre del articulo
		int ident;					//!< Identificador del articulo 
		bool estado;				//!< Estado del articulo		
		int valor;					//!< Valor del articulo
	
		Fecha* fecha;				//!< relacion con la clase Fecha
		Profesor* profesor;			//!< relacion con la clase Profesor
		Estudiante* estudiante;		//!<relacion con la clase Estudiantes

public: 
 	 /** @brief Constructor por defecto */
	 Articulo();
	
	 /** @brief Constructor */
	 Articulo(string nombre , int ident, bool estado,int valor,int dia, int mes, int anio); 
	
	 /** @brief Destructor */
	 ~Articulo(); 

	 /**linea de metodos para acceder y modidficar los atributos */
     string getNombre();
     void setNombre(string nombre); 
	
	 void AsignarFecha(Fecha* FechaArticulo) ;
	 Fecha* getFecha() ;
	 
	 bool getEstado();
	 void setEstado(bool estado);
	
	 int getIdent();
	 void setIdent(int ident);
	
	 int getValor();
	 void setValor(int Valor);
	 
	 void asignarProfesor(Profesor* profesor);
};

#endif /* ARTICULOS_H_ */
