/**
 *
 * @archivo Fecha.h
 *
 */

/** Incluimos las librerias */
#ifndef FECHA_H_
#define FECHA_H_

#include <iostream>

/// \namespace /// 
using namespace std;

/*! \@class  Fecha  
  *  \brief esta clase se crea para establece una relacion entre la fecha y los prestamos
  *   de esta manera calculamos el valor del articulo al realizar la depreciacion
  */
class Fecha {
private:
	 int dia; 						//!< Dia de la fecha 
	 int mes;  						//!< Mes de la fecha
	 int anio;      				//!< Año de la fecha 
	
public:
	 /** @brief Constructor por defecto */
	 Fecha();
	 
	 /** @brief Constructor */
	 Fecha(int dia, int mes, int anio);
	
	 /** @brief Destructor */
	 ~Fecha();

	 /**linea de metodos para acceder y modidficar los atributos */
	 int getDia();
	 void setDia(int dia);
	 int getMes();
	 void setMes(int mes);
	 int getAnio();
	 void setAnio(int anio);


};

#endif /* FECHA_H_ */	
