/**
 *
 * @archivo Estudiante.cpp
 *
 */

/** Incluimos las librerias */
#include "Estudiante.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include  <iomanip>

/** \namespace */
using namespace std;

/** @brief Constructor por defecto */
Estudiante::Estudiante() {

}

/** @brief Constructor */
Estudiante::Estudiante(string nombre, string apellido, int cedula, char sexo, int telefono, int edad, bool activo
                       , int codigo, int semestre, int plan): Persona(nombre, apellido, cedula,sexo, telefono, edad, activo) {
	this->codigo = codigo;
	this->semestre = semestre;
	this->plan = plan;
}

/** @brief Destructor */
Estudiante::~Estudiante(){
	
}

/**linea de metodos para acceder y modidficar los atributos */
int Estudiante::getCodigo(){
    return codigo;
}
void Estudiante::setCodigo(int codigo){
    this->codigo=codigo;
}
int Estudiante::getSemestre(){
    return semestre;
}
void Estudiante::setSemestre(int semestre){
    this->semestre=semestre;
}
int Estudiante::getPlan(){
    return plan;
}
void Estudiante::setPlan(int plan){
    this->plan=plan;
}
bool Estudiante::getActivo(){
	return activo;
}




