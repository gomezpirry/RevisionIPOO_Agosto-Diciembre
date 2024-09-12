/*
 * Profesor.cpp
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#include "Profesor.h"

Profesor::Profesor() {

}


Profesor::Profesor(string nombre, string apellido, int cedula,
			char sexo, int telefono,	int edad, bool activo,
			int codigo, string titulo) : Persona(nombre, apellido, cedula,
					sexo, telefono, edad, activo) {

	this->codigo = codigo;
	this->titulo = titulo;

}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

string Profesor::getTitulo(){
    return titulo;
}



void Profesor::setTitulo(string titulo){
    this->titulo=titulo;

}

int Profesor::getCodigo(){
    return codigo;
}

void Profesor::setCodigo(int codigo){
	this->codigo=codigo;
}


bool Profesor::getActivo(){
	return activo;
}


void Profesor::setActivo(bool){
	this->activo=activo;
}

