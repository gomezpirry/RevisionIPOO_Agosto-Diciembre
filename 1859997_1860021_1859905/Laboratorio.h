/**
 *
 * @archivo Laboratorio.h
 *
 */

/** Incluimos las librerias */
#include "Articulo.h"
#include "Computo.h"
#include "Mueble.h" 
#include "Prestamo.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Archivo.h"

#ifndef LABORATORIO_H_
#define LABORATORIO_H_

#include <vector>
#include <iostream>

/** \namespace */
using namespace std;

 /*! \@class  Laboratorio
  *  \brief esta clase contara con relaciones de otras clases
  *
  *  Gestiona operaciones como registrar,cargar objetos profesores, articulos y estudiantes
  *
  */
 class Laboratorio {
 private:

	vector<Estudiante> estudiantes;   //!< Vetor estudiantes */
    vector<Profesor> profesores ;     //!< Vector profesores */
	vector<Articulo> articulos;	      //!< Vector articulos  */
	vector<string>  informaciones;
	Fecha fecha;
	

 public:

	/** @brief Constructor */
	 Laboratorio();
 	/** @brief Destructor */
	 ~Laboratorio();
     
     /**linea de metodos para acceder */
	void registrarInfo();
	void modificarInfo();
	void cargarInfo();

	/*! \brief metodo utilizado para registrar informacion de un estudiantes
     *  crea un vector y la almacena en un archivo .csv
     *
     * \param[cin] digitar informacion de Estudiante
     */
	void registrarArticulos();
	
	void registrarInformaciones();
	

	/*! \brief metodo utilizado para registrar informacion de un profesor,
	 *   crea un vector y la almacena en un archivo .csv
     *
     * \param[cin] digitar informacion de Profesor
     */
	void registrarProfesor();

	/*! \brief metodo utilizado para registrar informacion de un articulo,
	 *   crea un vector y la almacena en un archivo .csv
     *
     * \param[cin] digitar informacion de articulo
     */
	void registrarEstudiantes();

	/*!
		\brief metodo para que la informacion del archivo "Estduiantes.csv" sea cargada al laboratorio
     */
	void cargarEstudiante();

	/*!
		\brief metodo para que la informacion del archivo "Profesor.csv" sea cargada al laboratorio
     */
	void cargarProfesor();

	/*!
		\brief metodo para que la informacion del archivo "Articulos.csv" sea cargada al laboratorio
     */
	void cargarArticulo();
	
	
	void cargarLaboratorio();
	
	
	

	 void consultarArticuloInter();
	 void consultarEstudianteInter();
	 void consultarProfesorInter();
	
	void elimEstudiante();
	void elimProfesor();
	void elimArticulo();
	
	void modificarAsignacion();
	 
	void getEstudiante();
	void getProfesor();
	void getArticulo();
	void getLaboratorio();
	void modEstudiante();
	void modProfesor();
	
	
	 
};

#endif /* LABORATORIO_H_ */
