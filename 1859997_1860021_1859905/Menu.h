/**
 *
 * @archivo Menu.h
 *
 */

/** Incluimos las librerias */
#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <vector>

#include "Laboratorio.h"
#include "Articulo.h"
#include "Mueble.h"
#include "Prestamo.h"
#include "Computo.h"
#include "Fecha.h"

/** \namespace */
using namespace std;
 
/*! \@class  Menu
  *  \brief creada para que el usuario pueda interactuar con la computadora, visualizando las 
  *	  las opciones que se muestran en el menu 
  */
class Menu {                                                
private:
	 Fecha  fecha;       //!< relacion con la clase Fecha
	
		
public:
     /** @brief Constructor */
  	 Menu(); 
  	 
	 /** @brief Destructor */
	 ~Menu();


	 /**linea de metodos para acceder*/
	
	 /*! \brief metodo Menu Principal 
      *    en este podemos ver las diferentes opciones para que el usuario interactue con la computadora
      *
      *   \param[cin] digitar opcion 
      */
	 void menuPrincipal();

	 /*! \brief metodo Menu Registrar
      *    permite visualizar las opciones de registro que se encuentran en el programa 
      *	   sub-menu de menu principal 
      *
      *   \param[cin] digitar opcion 
      */
	 void menuRegistrar();
	 
	 /*! \brief metodo Menu Cargar
      *    con este metodo podemos ver que informacion podemos cargar 
      *	   sub-menu de menu principal 
      *
      *   \param[cin] digitar opcion 
      */
	 void menuCargar();
	  
	  
	  
	 void menuEliminar();
	 void menuConsultar();
	 void menuAsignar();
	 void menuModificar();
	
	
	 void guardarArchivos();
	 void consultarArticuloAsignado();
	 void consultarPrestamos();
	 void consultarEstadoArticulos();
	 void consultarEstado();
	
	
	
};

#endif /* MENU_H_ */
