/**
 *
 * @archivo Menu.cpp
 *
 */

/** Incluimos las librerias*/
#include "Menu.h"
#include <iostream>

/** @brief constructor por defecto*/
Menu::Menu() {

}

/** @brief Destructor */
Menu::~Menu() {
	// TODO Auto-generated destructor stub
}



/*************************************************************************************************************************************             
*                                        																		 *															
*************************************************************************************************************************************/

/*************************************** Menu registrar *************************************************************************/

Laboratorio Hoy;


 //!< Laboratorio creado para trabajar con esta variable


/*! \brief menu principal
 *  permite mostrar todas las opciones principales para realizar 
 *
 * \param[cin] digitar opcion
 */
void Menu::menuPrincipal() {
Hoy.registrarInformaciones();
	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();
        cout << "BIENVENDOS A LABORATORIO NEWTON \n "; 
		cout << "Menu Principal \n";
		cout << "1. Registrar	\n";
		cout << "2. Modificar 	\n";
		cout << "3. Cargar 		\n";
	    cout << "4. Consultar	\n";
	    cout << "5. Eliminar	\n";
        cout << "6. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:
				     menuRegistrar();					//!< metodo que permite ir al sub- menu registrar 
				break;

			case 2:
			      	menuModificar();					//!< metodo que permite ir al sub- menu modificar 
				break;

			case 3:
				 	menuCargar();						//!< metodo que permite ir al sub- menu cargar
				break;

			case 4:
			     	 menuConsultar();					//!< metodo que permite ir al sub- menu consultar
			    	 			    //!< metodo que permite ir al sub- menu asignar 
				break;
			case 5:
			     	 menuEliminar();					//!< metodo que permite ir al sub- menu eliminar
				break;
			
			case 6:
				salir = true;
				cout << "Hasta Pronto \n";
                cout << "Gracias por su visita" ;
			break;
			default:
				cout << "Selecciones una opcion valida\n";
			break;
		}
	} while (!salir);
}

/*************************************** Menu Registrar*************************************************************************/

/*! \brief menu registrar
 *  mostrara en pantalla la opcion que permite registrar un estudiante, profesor o articulo nuevo
 *
 * \param[cin] digitar opcion
 */
void Menu::menuRegistrar(){

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();

		cout << "Menu Principal \n";
		cout << "1. Registrar Estudiante	\n";
		cout << "2. Registrar Articulo 					  \n";
		cout << "3. Registrar Prestamo A Estudiante		 \n";
		cout << "4. Registrar Profesor 					 \n";
		cout << "5. Registrar Devolucion De Un estudiante \n";
		cout << "6. Registrar Informacion De laboratorio \n";
		cout << "7.  <- Atras   \n";
		cout << "8. Salir \n ";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:{
				system("cls");
				cout <<" MENU Registrar Estudiante ";
				Hoy.registrarEstudiantes() ;                   	//!< metodo permite registrar un estudiante ingresando todos sus datos 
				system("pause ");
				system("cls");
				break;
			}

  			case 2:{

				system("cls");
				cout <<" MENU Registrar Articulo\n\n ";
				Hoy.registrarArticulos() ; 			       //!< metodo permite registrar articulos ingresando todos sus datos 
				system("pause ");
				system("cls");

  		    }

				break;


			case 3:
				    system("cls");
	     		    cout <<" MENU Registrar Prestamo A Estudiante ";

	     		    system("pause");
	     		    system("cls");
				break;

			case 4: {
				
			        system("cls");
			  	    cout <<" MENU Registrar Profesor ";
					Hoy.registrarProfesor() ;						//!< metodo permite registrar profesor ingresando todos sus datos
			  	    system("pause");
			  	    system("cls");
				break;
			    }
			case 5:
				    system("cls");
				 	cout <<" MENU Registrar Devolucion ";
				 	system("pause");
				 	system("cls");
				break;
			case 6:
			       	system("cls");
				    cout <<" MENU Registrar Informacion Laboratorio ";
					system("pause");
				    system("cls");
				break;

			case 7:
					 salir = true;
			 		 cout << "Hasta Pronto";
				break;

            case 8:
					salir = true;
			 		cout << "Hasta Pronto";
				break;      
			default:
					cout << "Selecciones una opcion valida\n";
				break;
		}

	} while (!salir);
}


/*************************************** Menu Modificar*************************************************************************/

/*! \brief menu modificar
 *  mostrara en pantalla las opciones que tiene el usuario para modificar 
 *
 * \param[cin] digitar opcion
 */
void Menu::menuModificar(){
	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();

		cout << "Menu Principal \n";
		cout << "1. Modificar Informacion Laboratorio	 \n";
		cout << "2. Modificar Informacion Articulo       \n";
		cout << "3. Modificar Informacion Estudiante	 \n";
		cout << "4. Modificar Informacion Profesor		 \n";
		cout << "5.  <- Atras   \n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:{
				   cout <<" MENU Modificar Informacion Laboratorio ";
		
					
				break;
					}
  			case 2:{
  				
  				 		system("cls");
                     cout <<" MENU informacion de articulo \n \n ";
	
				break;
			  }
  				 

			case 3:{
				     
					 system("cls");
                     cout <<" MENU Modificar Informacion Estudiante \n \n ";
                     Hoy.modEstudiante();
					 system("pause");						//!< metodo para modificar un estudiante
					
				
				break;
			}
					
			case 4:{
				  system("cls");
                   cout <<" MENU Modificar Informacion Profesor \n \n ";
                   Hoy.modProfesor();
				   system("pause");
				   
				   								//!< metodo para modificar un profesor
				break;
            }
                
			case 5:
					salir = true;
			 		cout << "Hasta Pronto";
				break;

			default:
					cout << "Selecciones una opcion valida\n";
				break;
		}
	} while (!salir);

}


/*************************************** Menu Eliminar *************************************************************************/

/*! \brief menu eliminar
 *  mostrara en pantalla las opciones del sub-menu eliminar 
 *
 * \param[cin] digitar opcion
 */
void Menu::menuEliminar(){

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();

		cout << "Menu Principal \n";
		cout << "1. Eliminar Registro Articulos	 	   \n";
		cout << "2. Eliminar Registro Profesores       \n";
		cout << "3. Eliminar Registro Estudiante       \n";
		cout << "4.  <- Atras   \n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:{
				system("cls");
				cout << "MENU eliminar articulo \n \n ";
				Hoy.elimArticulo();
				break;
			}
				   

  			case 2:{
			    system("cls");
                cout <<" MENU eliminar profesor \n \n ";
                Hoy.elimProfesor();
  				break;
			  }

				

			case 3:{
				system("cls");
                cout <<" MENU eliminar estudiante \n \n ";
                Hoy.elimEstudiante();
				break;
			}

			case 4:
					salir = true;
			 		cout << "Hasta Pronto";
				break;

			default:
					cout << "Selecciones una opcion valida\n";
				break;
		}
	} while (!salir);

}

/*************************************** Menu Cargar *************************************************************************/

/*! \brief menu cargar
 *  mostrara en pantalla las opciones de cargar al usuario
 *
 * \param[cin] digitar opcion
 */
void Menu::menuCargar(){

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();

		cout << "Menu Principal \n";
		cout << "1. Cargar Informacion Laboratorio 	   \n";
		cout << "2. Cargar Informacion Articulos 	   \n";
		cout << "3. Cargar Informacion Profesor 	   \n";
		cout << "4. Cargar Informacion Estudiante     \n";
		cout << "5. <- Atras   \n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:{
			       system("cls");
			  	    cout <<" MENU Laboratorio:  \n ";
					Hoy.cargarLaboratorio();
			  	    system("cls");
				break;
			}

  			case 2: {
			       system("cls");
			  	    cout <<" MENU Articulo:  \n ";
					Hoy.cargarArticulo();
			  	    system("cls");
			  	    Hoy.getArticulo() ; 
			  	    system("cls");
                break;
			}

			case 3: {
                    system("cls");
			  	    cout <<" MENU Profesor:  \n ";
					Hoy.cargarProfesor();
			  	    system("cls");
			  	    Hoy.getProfesor() ; 
			  	    system("cls");
				break;
			}

			case 4:{
					system("cls");
			  	    cout <<" MENU Estudiante:  \n ";
					Hoy.cargarEstudiante();
			  	    system("cls");
			  	    Hoy.getEstudiante() ; 
			  	    system("cls");

				break;
			}

			case 5:
					salir = true;
			 		cout << "Hasta Pronto";
				break;

			default:
					cout << "Selecciones una opcion valida\n";
				break;
		}
	} while (!salir);
}

/*************************************** Menu Consultar *************************************************************************/

/*! \brief menu consultar
 *  mostrara en pantalla un sub-menu donde podra visualizar el contenido de este 
 *
 * \param[cin] digitar opcion
 */
void Menu::menuConsultar(){

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();

		cout << "Menu Principal \n";
		cout << "1. Consultar Articulo \n";
		cout << "2. Consultar estudiante	 	   \n";
		cout << "3. Consultar Profesor  \n,
		cout << "4. <- Atras   \n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:
				   cout <<"  ";
                    Hoy.consultarArticuloInter();
				break;

  			case 2:{
  				cout << "Consultar " << endl;
  				Hoy.consultarEstudianteInter();
				break;
			  }
			  
			case 3:{
  				cout << "Consultar " << endl;
				Hoy.consultarProfesorInter();
				break;
			}
			case 4:{
				
					salir = true;
			 		cout << "Hasta Pronto";
				break;
			}
			default:
					cout << "Selecciones una opcion valida\n";
				break;
		}
	} while (!salir);


}






