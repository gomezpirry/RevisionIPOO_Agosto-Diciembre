/**
 *
 * @archivo Fecha.cpp
 *
 */

/** Incluimos las librerias */
#include "Fecha.h"

/** @brief Constructor por defecto */
Fecha::Fecha(){
	
}
 
/** @brief Constructor */
Fecha::Fecha(int dia, int mes, int anio){
	this->dia=dia;
	this->mes=mes;
	this->anio=anio;
}

/** @brief Destructor */
Fecha::~Fecha() {
	
}

/**linea de metodos para acceder y modidficar los atributos */
int Fecha::getDia(){
	return this->dia;
}
void Fecha::setDia(int dia){
	this->dia=dia; 
}
int Fecha::getMes(){
	return this->mes;
}
void Fecha::setMes(int mes){
	this->mes=mes; 
}
int Fecha::getAnio(){
	return this->anio;
}
void Fecha::setAnio(int anio){
	this->anio=anio; 
}

