/**
 *
 * @archivo Persona.cpp
 *
 */

/** Incluimos las librerias */
#include "Persona.h"

/** @brief Constructor por defecto */
Persona::Persona() {
	// TODO Auto-generated constructor stub
}

/** @brief Constructor */
Persona::Persona(string nombre, string apellido, int cedula, char sexo, int telefono, int edad, bool activo){
	this->nombre = nombre;
	this->apellido = apellido;
	this->cedula = cedula;
	this->sexo = sexo;
	this->telefono = telefono;
	this->edad = edad;
	this->activo = activo;
}

//** @brief Destructor */
Persona::~Persona() {
	// TODO Auto-generated destructor stub
}
