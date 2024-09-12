/**
 *
 * @archivo Articulo.cpp
 *
 */
 
/// Incluimos las librerias ///
#include "Articulo.h"
#include "Fecha.h"
#include <string>

/** @brief Constructor por defecto */
Articulo::Articulo() {
	this->nombre="";        
	this->ident=0;
	this->estado="";
	this->valor=0;
	fecha->setDia(0);
	fecha->setMes(0);
	fecha->setAnio(0);
}

/** @brief Constructor */
Articulo::Articulo(string nombre,int ident, bool estado, int valor,int dia,int mes, int anio) {
	this->nombre=nombre;	
	this->ident=ident;
	this->estado=estado;
	this->valor=valor;
	fecha->setDia(dia);
	fecha->setMes(mes);
	fecha->setAnio(anio);

}

/** @brief Destructor */
Articulo::~Articulo() {
	
}


  /**linea de metodos para acceder y modidficar los atributos */

   bool Articulo::getEstado() {
		return estado;
	}

	void Articulo::setEstado(bool estado) {
		this->estado = estado;
	}

	int Articulo::getIdent() {
		return ident;
	}

	void Articulo::setIdent(int ident) {
		this->ident = ident;
	}
	
	int Articulo::getValor(){
		return valor;
    }
	
	void Articulo::setValor (int Valor) {
		this-> valor = valor ;
	}
	
	
	void Articulo::asignarProfesor(Profesor* profesor) {
	      this->profesor = profesor;
	}
	
	string Articulo::getNombre(){
		 return nombre;
	}
	
	void Articulo::AsignarFecha(Fecha* FechaArticulo) {
		this->fecha = FechaArticulo ;
	}
	
	Fecha* Articulo::getFecha() {
		return this->fecha ; 
	}
	
	void Articulo::setNombre(string nombre){
		this->nombre=nombre; 
	}


