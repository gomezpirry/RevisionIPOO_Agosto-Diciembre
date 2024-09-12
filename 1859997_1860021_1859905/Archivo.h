/**
 *
 * @archivo Archivo.h
 *
 */
/** Incluimos las librerias */
#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include "Estudiante.h"
#include "Profesor.h"
#include "Articulo.h"
#include "Mueble.h"
#include "Prestamo.h"
#include "Computo.h"
#include "Fecha.h"

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.>

/** \namespace */
using namespace std;

 /*! \@class  Archivo
  *  \brief Creada para el manejo de los archivos
  *
  *  Gestiona las operaciones de carga y
  *  guardar en un archivo .csv para los empleados
  */
  class Archivo {
 private:
 public:

	/** @brief Constructor */
	 Archivo();

	/** @brief Destructor */
	~Archivo();

	/// linea de metodos ///

	/*! \brief Guardar estdiante en un archivo .csv
	 *
     *  \param[in]  parametro de entrada para guardar los el archivo
     *  \param[out]  Estudiantes vector de salida
     */
     void guardarEstudiante(vector<Estudiante> estudiantes);
     
	/*! \brief Guardar profesor en un archivo .csv
	 *
     *  \param[in]  parametro de entrada para guardar los el archivo
     *  \param[out]  Profesores vector de salida
     */
	 void guardarProfesor(vector<Profesor> profesores);
    
	/*! \brief Guardar articulo en un archivo .csv
	 *
     *  \param[in]  parametro de entrada para guardar los el archivo
     *  \param[out]  Articulos vector de salida
     */
	void guardarArticulo(vector<Articulo> articulos);
	
	
	/*! \brief Guardar laboratorio en un archivo .csv
	 *
     *  \param[in]  parametro de entrada para guardar los el archivo
     *  \param[out]  Laboratorio vector de salida
     */
	void guardarLaboratorio(vector<string> laboratorios);
	
    /*! \brief Cargar estudiante de un archivo .csv
     *	
     * \param[out] archivo ruta del archivo para cargar
     */
	 void cargarEstudiante (vector<Estudiante>* estudiantes);
     
    /*! \brief Cargar Profesor de un archivo .csv
     *	
     * \param[out] archivo ruta del archivo para cargar
     */
	void cargarProfesor   (vector<Profesor>* profesores);
	
    /*! \brief Cargar Articulo de un archivo .csv
     *	
     * \param[out] archivo ruta del archivo para cargar
     */
	void cargarArticulo   (vector<Articulo>* articulos);
	
    /*! \brief Cargar informacion de laboratorio de un archivo .csv
     *	
     * \param[out] archivo ruta del archivo para cargar
     */
	void cargarInfo(vector<string>* Info);


	/*!\brief Generar estudiante basado en una linea de texto
     *
     * \param [in] linea Linea de texto con informacion de Estudiante
     * \return Estudiante generado apartir de la linea
     */
    Estudiante cargarLinea (string linea);

    /*!\brief Generar empleado basado en una linea de texto
     *
     * \param [in] linea Linea de texto con informacion de Profesor
     * \return Profesor generado apartir de la linea
     */
	Profesor _cargarLinea(string linea);

    /*! \brief generar articulo  basado en una linea de texto
     *
     * \param [in] linea Linea de texto con informacion de Articulo
     * \return Articulo generado apartir de la linea
     */
	Articulo cargar_Linea(string linea);
	 
	/*! \metodos consultar
	 *  \brief permite consultar en el archivo un dato o elemento
	 *    de este para mostrarlo en pantalla
	 */
	 void consultar_Articulo(vector<Articulo> articulos);
	 void consultar_Estudiante(vector<Estudiante> estudiantes);
	 void consultar_Profesor(vector<Profesor> profesores);
 
	
	/*! \metodos eliminar
	 *  \brief permite eliminar en el archivo un dato o elemento
	 *    de este para mostrarlo en pantalla
	 */
	 void eliminarEstudiante(vector<Estudiante> estudiantes);
	 void eliminarProfesor(vector<Profesor> profesores);
	 void eliminarArticulo(vector<Articulo>articulos);
	 
	 
	/*! \metodos Mostrar
	 *  \brief permite mostrarlo en pantalla
	 */
	 void MostrarEstudiante (vector <Estudiante> estudiante) ;
	 void MostrarProfesor (vector<Profesor> profesores);
	 void MostrarArticulo (vector<Articulo> articulos);
	 void MostrarLaboratorio(vector<string> laboratorios);
		
	/*! \metodo modificar
	 *  \brief permite modificar en el archivo un dato o elemento
	 *    de este para mostrarlo en pantalla
	 */		 
	 void modificarEstudiante(vector<Estudiante>estudiante);
	 void modificarProfesor(vector<Profesor>profesores);
	 
	 
	 
};

#endif /* ARCHIVO_H_ */
