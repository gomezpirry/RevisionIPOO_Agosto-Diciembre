/**
 *
 * @archivo Persona.h
 *
 */

/** Incluimos las librerias */
#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>

/** \namespace */
using namespace std;

 /*! \@class  Persona
  *  \brief esta sera clase padre y sus clases hijas seran Estudiante y Profesor 
  *
  *  Gestiona operaciones como registrar,cargar objetos profesores, articulos y estudiantes 
  *   
  */
 class Persona {
  protected:
	 int cedula;       		//!< Cedula de la persona
	 string nombre;         //!< Nombre de la persona      
	 string apellido;		//!< Apellido de la persona
	 char sexo;       		//!< Sexo de la persona (F) femenino (M) masculino       
	 int telefono; 			//!< Telefono de la persona
	 bool activo;  			//!< Estado de una estudiante (True) Activo (False) Inactivo
	 int edad;				//!< Edad de la persona 

  public:
	/** @brief Constructor por defecto */
	 Persona();  
	
	/** @brief Constructor */
	 Persona(string nombre, string apellido, int cedula,char sexo, int telefono, int edad, bool activo);
	
	//** @brief Destructor */
	 ~Persona();

	 /**linea de metodos para acceder y modidficar los atributos */
	 bool isActivo() {
		return activo;
	 }

	 void setActivo(bool activo) {
		this->activo = activo;
	 }

	 string getApellido()  {
		return apellido;
	 } 

	 void setApellido(string apellido) {
		this->apellido = apellido;
	 }

	 int getCedula() {
		return cedula;
	 }

	 void setCedula(int cedula) {
		this->cedula = cedula;
	 }

	 int getEdad()  {
		return edad;
	 }

	 void setEdad(int edad) {
		this->edad = edad;
	 }

	 string getNombre() {
		return nombre;
	 }

	 void setNombre(string nombre) {
		this->nombre = nombre;
	 }

	 char getSexo() {
		return sexo;
	  }

	 void setSexo(char sexo) {
		this->sexo = sexo;
	 }

	 int getTelefono(){
		return telefono;
	 }

	 void setTelefono(int telefono) {
		this->telefono = telefono;
	 }
};

#endif /* PERSONA_H_ */
