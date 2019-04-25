/**
 *
 * @archivo Profesor.h
 *
 */

/** Incluimos las librerias */
#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h" 

/** \namespace */
using namespace std; 

/*! \@class  Profesor
  *  \brief hereda de la clase Persona 
  *
  */
class Profesor: public Persona {
private:
	 int 	    codigo;				//!< Codigo del profesor         
	 string 	titulo;				//!< Titulo del profesor
public:
	 /** @brief Constructor por defecto */
	 Profesor();
	
	 /** @brief Constructor */
     Profesor(string nombre, string apellido, int cedula, char sexo, int telefono, int edad, bool activo,  
			int codigo, string titulo);
	
	 /** @brief Destructor */
 	 ~Profesor(); 

	 /**linea de metodos para acceder y modidficar los atributos */
     void modificarInfo();
	 void eliminarRegistro();
	 void cargarInfo();
	 void consultarArticulo();
	 
     /**linea de metodos para acceder y modidficar los atributos */
	 int getCodigo();
	 void setCodigo(int codigo);
	 string getTitulo();
	 void setTitulo(string titulo); 
	 bool getActivo();
	 void setActivo(bool);

};

#endif /* PROFESOR_H_ */
