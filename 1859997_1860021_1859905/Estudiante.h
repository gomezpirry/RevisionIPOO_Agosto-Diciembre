/**
 *
 * @archivo Estudiante.h
 *
 */

/** Incluimos las librerias */
#include "Persona.h"      
#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include <stdlib.h>
#include <iostream>

/** \namespace */
using namespace std;

/*! \@class  Estudiante
  *  \brief hereda de la clase Persona 
  *
  */
class Estudiante : public Persona {
private:
	 int	 codigo; 					//!< Codigo del estudiante 
	 int  semestre;      				//!< Semestre del estudiante
	 int  plan;							//!< Plan del estudiante


public:
	 /** @brief Constructor por defecto */
	 Estudiante();
	
	 /** @brief Constructor */
     Estudiante(string nombre, string apellido, int cedula, char sexo, int telefono, int edad, bool activo,   
				int codigo, int semestre, int plan);
	
	 /** @brief Destructor */
	 ~Estudiante(); 

     ///linea de metodos /// 
     
	 void registrarPrestamo();
	 void modificarInfo();
	 void eliminarRegistro();
	 void cargarInfo();
	 void registrarDevolucion();
	 void generarMulta();
	 void pagoMulta();
	 void consultarMulta();
     void bucarEstudiante(); 

     /**linea de metodos para acceder y modidficar los atributos */
     int getCodigo();
     void setCodigo(int codigo);
	 void setPlan(int plan);
	 bool getActivo();
	 int getPlan();
	 int getSemestre();
	 void setSemestre(int semestre);


};

#endif /* ESTUDIANTE_H_ */
