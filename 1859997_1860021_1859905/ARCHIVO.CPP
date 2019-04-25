/**
 *
 * @archivo Archivo.cpp
 *
 */
/** Incluimos las librerias */
#include "Archivo.h"
#include "Laboratorio.h"
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <iomanip>
#include <iostream>

/** @brief Constructor */
Archivo::Archivo(){

}

/** @brief Destructor */
Archivo::~Archivo(){

}

/*************************************************************************************************************************************
*                                        Metodos Guardar																			 *
*************************************************************************************************************************************/



/************************************ Guardar Estudiante ************************************************************/

/*! \brief Guardar Estudiantes en un archivo .csv
  *
  *   revisar [ifstream :: open]
  *
  *  \param["Estudiantes.csv"]  ruta del archivo para guardar el vector estudiantes
  *  \param[out]  Estudiantes vector de estudiantes
  *
  *  |ios :: out| parametro de salida |
  */
void Archivo::guardarEstudiante(vector<Estudiante> estudiantes ) {
ofstream file;

file.open("Estudiantes.csv", ios::out) ;

file << "Nombre" << ';' << "Apellido " << ';' <<"Sexo "<< ';' <<"Edad "<<';' << "Cedula "<< ';' <<"Telefono "<<';' <<"Codigo "<< ';' << "Semestre "<<';' <<"Plan "<< ';' <<"Activo " <<'\n';

/*! \brief recorrer el vector para ir guardando los datos */
for(int i = 0; i < estudiantes.size(); i++){
	file << estudiantes[i].getNombre() << ';';
    file << estudiantes[i].getApellido() << ';' ;
    file << estudiantes[i].getSexo() << ';' ;
    file << estudiantes[i].getEdad() << ';' ;
    file << estudiantes[i].getCedula() << ';' ;
    file << estudiantes[i].getTelefono() << ';' ;
    file << estudiantes[i].getCodigo() << ';' ;
    file << estudiantes[i].getSemestre() << ';' ;
    file << estudiantes[i].getPlan() << ';' ;
    file << estudiantes[i].getActivo() << '\n' ;

  }
/*! \brief cierra el archivo */
 file.close();
}

/************************************ Guardar Profesor ************************************************************/

/*! \brief Guardar Profesor en un archivo .csv
  *
  *   revisar [ifstream :: open]
  *
  *  \param["Profesores.csv"]  ruta del archivo para guardar el vector profesores
  *  \param[app]  Profesor vector de profesores
  *
  *  |ios :: app| Todas las operaciones de salida se realizan al final del archivo, agregando a su contenido existente |
  */
void Archivo::guardarProfesor(vector<Profesor> profesores ) {
ofstream file;

file.open("Profesores.csv", ios::out) ;

file << "Nombre" << ';' << "Apellido " <<';' << "Titulo " << ';' <<"Sexo "<<';' << "Edad " <<';' <<"Cedula " <<';' <<"Telefono "<< ';' <<"Codigo  " <<';' << '\n';

/*! \brief recorrer el vector para ir guardando los datos */
for(int i = 0; i < profesores.size(); i++){
	file << profesores[i].getNombre() << ';';
    file << profesores[i].getApellido() << ';' ;
    file << profesores[i].getTitulo() << ';';
    file << profesores[i].getSexo() << ';' ;
    file << profesores[i].getEdad() << ';' ;
    file << profesores[i].getCedula() << ';' ;
    file << profesores[i].getTelefono() << ';' ;
    file << profesores[i].getCodigo() << '\n' ;

}
/*! \brief cierra el archivo */
 file.close();
}

/************************************ Guardar Articulo ************************************************************/

/*! \brief Guardar Articulos en un archivo .csv
  *
  *   revisar [ifstream :: open]
  *
  *  \param["Articulos.csv"]  ruta del archivo para guardar el vector Articulo
  *  \param[app]  Articulos vector de articulos
  *
  *  |ios :: app| Todas las operaciones de salida se realizan al final del archivo, agregando a su contenido existente |
  */

void Archivo::guardarArticulo(vector<Articulo> articulos ) {
ofstream file;

file.open("Articulos.csv", ios::out) ;

file << "Nombre" << ';' << "Ident " << ';' <<"Valor " << ';' <<"Dia "<< ';' <<"Mes " <<';' <<"Anio " << ';' <<'\n';

/*! \brief recorrer el vector para ir guardando los datos */
for(int i = 0; i < articulos.size(); i++){
	file << articulos[i].getNombre() << ';';
    file << articulos[i].getIdent() << ';' ;
    file << articulos[i].getValor() << ';';
    file << articulos[i].getFecha()->getDia() << ';' ;
    file << articulos[i].getFecha()->getMes() << ';' ;
    file << articulos[i].getFecha()->getAnio() << '\n' ;
	}
/*! \brief cierra el archivo */
file.close();
}
////////////////////////////////////////////////////////////////////////////////////
void Archivo::guardarLaboratorio(vector<string> laboratorios) {
ofstream file;

file.open("Laboratorio.csv", ios::out) ;

file << "Nombre" << ';' << " Contenido" <<'\n';

/*! \brief recorrer el vector para ir guardando los datos */
for(int i = 0; i < laboratorios.size(); i+=2){

	file <<laboratorios[i]<<';'<< laboratorios[i+1] << '\n';		
}

/*! \brief cierra el archivo */
 file.close();
}

/*************************************************************************************************************************************
*                                        Metodos Cargar      																		 *
*************************************************************************************************************************************/


/************************************ Cargar  Estudiante ***************************************************************************/


/*! \brief  cargar linea
  *	 realizar lectura del archivo "Estudiantes.csv" linea por linea
  *
  * \return Estudiante
  */
Estudiante Archivo::cargarLinea(string linea) {
  vector<string> palabras;
  string temp = "";
  for(size_t i = 0; i < linea.size(); i++){
    if(linea[i] == ';') {
      palabras.push_back(temp);
      temp = "";
    } else {
      temp += linea[i];
    }
  }

  /*! \brief Crea un objeto estudiantes
   */
	Estudiante _estudiante ;

   /*! \brief condicional para conocer el tamaño del vector
   *    y dar a cada atributo su posicion
   *  \fn int cambio, funcion establecida para cambio de string a entero
   *   \return estudiante
   */
  if (palabras.size() == 9) {
  	_estudiante .setNombre(palabras[0]) ;
  	
  	_estudiante .setApellido(palabras[1]) ;
  	
    _estudiante .setSexo(palabras[2][0]) ;  
	    //!< \brief se encuentran dos arreglos, ya es ques un caracter, solo necesitamos la posicion 0 del string
	int cambio = atoi(palabras[3].c_str());											 	//!< \brief int cambio, funcion establecida para cambio de string a entero
	_estudiante .setEdad (cambio);
	
	cambio =  atoi(palabras[4].c_str());	    //!< \brief int cambio, funcion establecida para cambio de string a entero
	_estudiante .setCedula(cambio);
	
	cambio =  atoi(palabras[5].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
	_estudiante .setTelefono(cambio);
	
	cambio =  atoi(palabras[6].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
    _estudiante .setCodigo(cambio);
    
	cambio =  atoi(palabras[7].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
	_estudiante .setPlan(cambio);
	
	cambio =  atoi(palabras[8].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
 	_estudiante .setActivo(cambio);
 	
	 cambio =  atoi(palabras[9].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
 	_estudiante .setSemestre(cambio);
  }
  return _estudiante;
}

/*! \brief  cargar estudiante
  *	 realizar lectura del archivo "Estudiantes.csv" mostrando su informacion
  * |ios::out| Archivo abierto para escritura: el búfer de flujo interno admite operaciones de salida..
  * \return Estudiante
  */
 void Archivo::cargarEstudiante(vector<Estudiante>* estudiantes) {
  	ifstream file;
	file.open("Estudiantes.csv", ios::out);
	char texto[512];

	file.getline(texto, 512, '\n');  //!< con esta linea de codigo, damos un salto de linea en el archivo para que la cabecera del archivo no se repita

	while(!file.eof()){
		file.getline(texto, 512) ;
		string texto_s(texto);
		/** descartar lineas en blanco*/
		if(texto_s == ""){
			continue;
		}
	 estudiantes->push_back(cargarLinea(texto));
	}
	file.close();
}

    /*! \brief recorrer el vector para ir mostrando los datos
	 *
	 *  \param[estudiantes.size()] parametro donde no tomamos el ultimo elemento del vector
	 */
 void Archivo::MostrarEstudiante(vector <Estudiante> estudiantes){
	for(int i=0 ; i < (estudiantes.size());i++){
	cout << "\t ESTUDIANTE: " << i+1 << "\n \n"  ;
 	cout << "Nombre: " << estudiantes[i].getNombre() << endl ;
 	cout << "Apellido: " << estudiantes[i].getApellido() << endl ;
 	cout << "Sexo: " << estudiantes[i].getSexo() << endl ;
 	cout << "Edad: " << estudiantes[i].getEdad() << endl ;
 	cout << "Cedula: " << estudiantes[i].getCedula() << endl ;
 	cout << "Telefono: " << estudiantes[i].getTelefono() << endl ;
 	cout << "Codigo: " << estudiantes[i].getCodigo() << endl ;
 	cout << "Plan: " << estudiantes[i].getPlan() << endl ;
 	cout << "Activo: " << estudiantes[i].getActivo() << endl ;
 	cout << "Semestre : " << estudiantes[i].getSemestre() << endl ;
		}
	}



/************************************ Cargar  Profesor ***************************************************************************/

/*! \brief  cargar linea
  *	 realizar lectura del archivo "Profesor.csv" linea por linea
  *
  * \return Profesor
  */
Profesor Archivo::_cargarLinea(string linea) {
  vector<string> palabras;
  string temp = "";
  for(size_t i = 0; i < linea.size(); i++){
    if(linea[i] == ';') {
      palabras.push_back(temp);
      temp = "";
    } else {
      temp += linea[i];
    }
 }

  /*! \brief Crea un objeto profesor
   */
   Profesor _profesor ;

  /*! \brief condicional para conocer el tamaño del vector
   *    y dar a cada atributo su posicion
   *   \fn int cambio, funcion establecida para cambio de string a entero
   *   \return profesor
   */
   if (palabras.size() == 7) {
   	int cambio ; 
  	_profesor .setNombre(palabras[0]) ;
  	_profesor .setApellido(palabras[1]) ;
  	
  	_profesor .setTitulo(palabras[2]) ;
	
    _profesor .setSexo(palabras[3][0]) ;     	//!< \brief se encuentran dos arreglos, ya es ques un caracter, solo necesitamos la posicion 0 del string
	
	cambio =  atoi(palabras[4].c_str());
	_profesor .setEdad (cambio);
	
	cambio = atoi(palabras[5].c_str());								//!< \brief int cambio, funcion establecida para cambio de string a entero
	_profesor .setCedula(cambio);
	
	cambio =  atoi(palabras[6].c_str());
	_profesor .setTelefono(cambio);
	
	cambio =  atoi(palabras[7].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
	_profesor.setCodigo(cambio);
    
    cambio =  atoi(palabras[8].c_str());
    _profesor .setCodigo(cambio);
			//!< \brief int cambio, funcion establecida para cambio de string a entero	
			//!< \brief int cambio, funcion establecida para cambio de string a entero							//!< \brief int cambio, funcion establecida para cambio de string a ente
			//!< \brief int cambio, funcion establecida para cambio de string a entero
   

  }
  return _profesor  ;
}

/*! \brief  cargar profesor
  *	 realizar lectura del archivo "Profesores.csv" mostrando su informacion
  * |ios::out| Archivo abierto para escritura: el búfer de flujo interno admite operaciones de salida.
  * \return Profesor
  */
 void Archivo::cargarProfesor(vector<Profesor>* profesores) {
  	ifstream file;
	file.open("Profesores.csv", ios::out);
	
	char texto[512];
    
	file.getline(texto, 512, '\n');        //!< con esta linea de codigo, damos un salto de linea en el archivo para que la cabecera del archivo no se repita
    
    while(!file.eof()){
		file.getline(texto, 512) ;
		string texto_s(texto);
		/** descartar lineas en blanco*/
		if(texto_s == ""){
		continue;
		}
	profesores->push_back(_cargarLinea(texto));
	}
   file.close();
}	

	/*! \brief recorrer el vector para ir mostrando los datos
	 *
	 *  \param[profesores.size() parametro donde no tomamos el ultimo elemento del vector
	 */
	 
void Archivo::MostrarProfesor(vector<Profesor> profesores){
	
    for(int i=0 ; i < (profesores.size());i++){
	cout << "\t PROFESOR: " << i+1 << "\n \n"  ;
 	cout << "Nombre: " << profesores[i].getNombre() << endl ;
 	cout << "Apellido: " << profesores[i].getApellido() << endl ;
 	cout << "Cedula: " << profesores[i].getCedula() << endl ;
 	cout << "Sexo: " << profesores[i].getSexo() << endl ;
 	cout << "Telefono: " << profesores[i].getTelefono() << endl ;
 	cout << "Edad: " << profesores[i].getEdad() << endl ;
 	cout << "Activo: " << profesores[i].getActivo() << endl ;
	cout << "Codigo: " << profesores[i].getCodigo() << endl ;
 	cout << "Titulo: " << profesores[i].getTitulo() << endl ;
	}
}

/************************************ Cargar  articulo ***************************************************************************/

/*! \brief  cargar linea
  *	 realizar lectura del archivo "Articulo.csv" linea por linea
  *
  * \return Articulo
  */
Articulo Archivo::cargar_Linea(string linea) {
  vector<string> palabras;
  string temp = "";
  for(size_t i = 0; i < linea.size(); i++){
    if(linea[i] == ';') {
      palabras.push_back(temp);
      temp = "";
    } else {
      temp += linea[i];
    }
  }

  /*! \brief Crea un objeto Articulo
   */
  Articulo _articulo ;

  /*! \brief condicional para conocer el tamaño del vector
   *    y dar a cada atributo su posicion
   *   \fn int cambio, funcion establecida para cambio de string a entero
   *   \return profesor
   */
   if (palabras.size() == 6) {
 	Fecha* FechaAux = new Fecha ; 
  	_articulo  .setNombre(palabras[0]) ;
  	
	int cambio = atoi(palabras[1].c_str());//!< \brief int cambio, funcion establecida para cambio de string a entero
	_articulo.setIdent(cambio);
	
	cambio =  atoi(palabras[2].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
    _articulo.setValor(cambio) ;
    
	cambio = atoi(palabras[3].c_str());         //!< \brief int cambio, funcion establecida para cambio de string a entero
    FechaAux->setDia(cambio) ;
    
	cambio =  atoi(palabras[4].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
	FechaAux->setMes(cambio) ;
    
	cambio =  atoi(palabras[5].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
	FechaAux->setAnio(cambio) ;
        
	cambio =  atoi(palabras[6].c_str());		//!< \brief int cambio, funcion establecida para cambio de string a entero
    _articulo.setEstado(cambio);
    
    _articulo.AsignarFecha(FechaAux) ; 
  }
  return _articulo ;
}

/*! \brief  cargar Articulo
  *	 realizar lectura del archivo "Articulos.csv" mostrando su informacion
  * |ios::out| Archivo abierto para escritura: el búfer de flujo interno admite operaciones de salida.
  * \return Articulo
  */
void Archivo::cargarArticulo(vector<Articulo>* articulos) {
  	ifstream file;
  	
	file.open("Articulos.csv", ios::out);
	char texto[512];

	file.getline(texto, 512, '\n'); //

	while(!file.eof()){
		file.getline(texto, 512) ;
		string texto_s(texto);
		/** descartar lineas en blanco*/
		if(texto_s == ""){
			continue;
		}
	 articulos->push_back(cargar_Linea(texto));
	}
 file.close();

}
	/*! \brief recorrer el vector para ir mostrando los datos
	 *
	 *  \param[articulos.size()] parametro donde no tomamos el ultimo elemento del vector
	 */
void Archivo::MostrarArticulo(vector<Articulo> articulos){
	
	for(int i=0 ; i < (articulos.size()) ;i++){
	cout << "\t Articulo : " << i+1 << "\n \n"  ;
 	cout << "Nombre: " << articulos[i].getNombre() << endl ;
 	cout << "Identificador: " << articulos[i].getIdent()<<endl;
 	cout << "Valor: " << articulos[i].getValor()<<endl;
 	cout << "Dia de ingreso : " << articulos[i].getFecha()->getDia()<<endl;
 	cout << "Mes de ingreso : "<<articulos[i].getFecha()->getMes()<<endl;
 	cout << "Anio de ingreso : "<<articulos[i].getFecha()->getAnio()<<endl;
 	cout << "Estado :  " << articulos[i].getEstado()<<endl;
   }

}
/*************************************************************************************/

void Archivo::cargarInfo (vector <string>* Info){
  string datos ; 
  
  ifstream file ("Laboratorio.csv") ;
  
  if (file.is_open()) {
  	char texto[512] ;
  	file.getline(texto, 512, '\n') ; 
  	while(!file.eof()) {
  		getline (file, datos, ';') ;
  		Info->push_back(datos) ; 
  		
  		getline (file, datos, '\n') ;
  		Info->push_back(datos) ; 
	  }
	  Info->pop_back() ;
  }
}

////////////////////

void Archivo::MostrarLaboratorio(vector<string> laboratorio){
	int itera = 1;
	for(int i=1 ; i < (laboratorio.size()) ;i+=2){
	cout << "\t Informacion numero : " << itera << "\n \n";	
	cout<< laboratorio[i] << ":"<< laboratorio[i+1]<<endl;
	itera++;
   }
}


/************************************ CONSULTAR ***************************************************************************/


/************************************ Consultar estudiante ***************************************************************************/

void Archivo::consultar_Estudiante(vector<Estudiante> estudiantes){
	cargarEstudiante(&estudiantes);
	int buscarCodigo;
	bool encontrar = false;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;
	if(estudiantes.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		for(int i = 0; i < estudiantes.size(); i++){
    	    if (buscarCodigo == estudiantes[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del estudiante son : " << "\n \n"  ;
			 	cout << "Nombre: " << estudiantes[i].getNombre() << endl ;
			 	cout << "Apellido: " << estudiantes[i].getApellido() << endl ;
			 	cout << "Sexo: " << estudiantes[i].getSexo() << endl ;
			 	cout << "Edad: " << estudiantes[i].getEdad() << endl ;
			 	cout << "Cedula: " << estudiantes[i].getCedula() << endl ;
			 	cout << "Telefono: " << estudiantes[i].getTelefono() << endl ;
			 	cout << "Codigo: " << estudiantes[i].getCodigo() << endl ;
			 	cout << "Plan: " << estudiantes[i].getPlan() << endl ;
			 	cout << "Activo: " << estudiantes[i].getActivo() << endl ;
			 	cout << "Semestre : " << estudiantes[i].getSemestre() << endl ;
			}
		}
    }

}





/************************************ Consultar profesor ***************************************************************************/

void Archivo::consultar_Profesor(vector<Profesor> profesores){
	cargarProfesor(&profesores);
	int buscarCodigo;
	bool encontrar = false;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;

	if(profesores.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		for(int i = 0; i < profesores.size(); i++){
    	    if (buscarCodigo == profesores[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del Docente son : " << "\n \n"  ;
			 	cout << "Nombre: " << profesores[i].getNombre() << endl ;
			 	cout << "Apellido: " << profesores[i].getApellido() << endl ;
			 	cout << "Cedula: " << profesores[i].getCedula() << endl ;
			 	cout << "Sexo: " << profesores[i].getSexo() << endl ;
			 	cout << "Telefono: " << profesores[i].getTelefono() << endl ;
			 	cout << "Edad: " << profesores[i].getEdad() << endl ;
			 	cout << "Activo: " << profesores[i].getActivo() << endl ;
				cout << "Codigo: " << profesores[i].getCodigo() << endl ;
			 	cout << "Titulo: " << profesores[i].getTitulo() << endl ;
			}
		}
    }

}

/************************************ Consultar articulo ***************************************************************************/

void Archivo::consultar_Articulo(vector<Articulo> articulos){
	cargarArticulo(&articulos);
	int buscarIdent;
	bool encontrar = false;
    cout << "Digite codigo a buscar : ";
	cin>>buscarIdent;

	if(articulos.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		for(int i = 0; i < articulos.size(); i++){
    	    if (buscarIdent == articulos[i].getIdent()){
			    cout << "Identificador existente \n";
			    encontrar = true;
			    cout << "\t Los datos del Articulos son : " << "\n \n"  ;
			    cout << "Nombre: " << articulos[i].getNombre() << endl ;
 				cout << "Identificador: " << articulos[i].getIdent()<<endl;
 				cout << "Valor: " << articulos[i].getValor()<<endl;
 				cout << "Dia de ingreso : " << articulos[i].getFecha()->getDia()<<endl;
 				cout << "Mes de ingreso : "<<articulos[i].getFecha()->getMes()<<endl;
 				cout << "Estado :  " << articulos[i].getEstado()<<endl;
				}
			}
		}
}


/////////////////////////////////// Eliminar     ////////////////////////////

/************************ Eliminar estudiante***************************************/

void Archivo::eliminarEstudiante(vector<Estudiante> estudiantes){
	cargarEstudiante(&estudiantes); 
	int buscarCodigo, confirmacion ;
	int Posicion ;
	bool encontrar = false;
	bool Eliminado = false ;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;
	if(estudiantes.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		cout << estudiantes.size() << endl ;
		system("pause") ; 
		for(int i = 0; i < estudiantes.size(); i++){
    	    if (buscarCodigo == estudiantes[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del estudiante son : " << "\n \n"  ;
			 	cout << "Nombre: " << estudiantes[i].getNombre() << endl ;
			 	cout << "Apellido: " << estudiantes[i].getApellido() << endl ;
			 	cout << "Sexo: " << estudiantes[i].getSexo() << endl ;
			 	cout << "Edad: " << estudiantes[i].getEdad() << endl ;
			 	cout << "Cedula: " << estudiantes[i].getCedula() << endl ;
			 	cout << "Telefono: " << estudiantes[i].getTelefono() << endl ;
			 	cout << "Codigo: " << estudiantes[i].getCodigo() << endl ;
			 	cout << "Plan: " << estudiantes[i].getPlan() << endl ;
			 	cout << "Activo: " << estudiantes[i].getActivo() << endl ;
			 	cout << "Semestre : " << estudiantes[i].getSemestre() << endl ;	
				Posicion = i ; 		
            }
        }
        cout << "\nDesea eliminar el estudiante? " << endl ;
		cout << "1. Si " << endl ;
		cout << "2. No " << endl ;
				
		cin >> confirmacion ;
			
		switch(confirmacion) {
			case 1 : { // si
				estudiantes.erase(estudiantes.begin()+Posicion, estudiantes.begin()+(Posicion+1)) ;
				cout << "\nEl estudiante ha sido eliminado " << endl ;
				Eliminado = true ;
				break;
			}
					
			case 2 : { // no
				cout << "\nTe estamos devolviendo al menu de eliminar" << endl ;
				break;
			}
					
			default : {
				cout << "\nOpcion incorrecta" << endl ;
				system("pause") ;
				system("cls") ;
				break;
			}
		}
    }
    
    if (Eliminado == true) {
    	this->guardarEstudiante(estudiantes) ; 
	}
}
/************************ Eliminar profesor***************************************/

void Archivo::eliminarProfesor(vector<Profesor> profesores){
	cargarProfesor(&profesores); 
	int buscarCodigo, confirmacion ;
	int Posicion ;
	bool encontrar = false;
	bool Eliminado = false ;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;
	if(profesores.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		cout << profesores.size() << endl ;
		system("pause") ; 
		for(int i = 0; i < profesores.size(); i++){
    	    if (buscarCodigo == profesores[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del Docente son : " << "\n \n"  ;
			 	cout << "Nombre: " << profesores[i].getNombre() << endl ;
			 	cout << "Apellido: " << profesores[i].getApellido() << endl ;
			 	cout << "Cedula: " << profesores[i].getCedula() << endl ;
			 	cout << "Sexo: " << profesores[i].getSexo() << endl ;
			 	cout << "Telefono: " << profesores[i].getTelefono() << endl ;
			 	cout << "Edad: " << profesores[i].getEdad() << endl ;
			 	cout << "Activo: " << profesores[i].getActivo() << endl ;
				cout << "Codigo: " << profesores[i].getCodigo() << endl ;
			 	cout << "Titulo: " << profesores[i].getTitulo() << endl ;
				Posicion = i ; 		
            }
        }
        cout << "\nDesea eliminar el Profesor? " << endl ;
		cout << "1. Si " << endl ;
		cout << "2. No " << endl ;
				
		cin >> confirmacion ;
			
		switch(confirmacion) {
			case 1 : { // si
				profesores.erase(profesores.begin()+Posicion, profesores.begin()+(Posicion+1)) ;
				cout << "\nEl Profesor ha sido eliminado " << endl ;
				Eliminado = true ;
				break;
			}
					
			case 2 : { // no
				cout << "\nTe estamos devolviendo al menu de eliminar" << endl ;
				break;
			}
					
			default : {
				cout << "\nOpcion incorrecta" << endl ;
				system("pause") ;
				system("cls") ;
				break;
			}
		}
    }
    
    if (Eliminado == true) {
    	this->guardarProfesor(profesores); 
	}
}

/************************ Eliminar Articulo***************************************/

void Archivo::eliminarArticulo(vector<Articulo> articulos){
	cargarArticulo(&articulos); 
	int buscarIdent, confirmacion ;
	int Posicion ;
	bool encontrar = false;
	bool Eliminado = false ;
    cout << "Digite codigo a buscar : ";
	cin>>buscarIdent;
	if(articulos.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay Identificador\n";
	}else {
		cout << articulos.size() << endl ;
		system("pause") ; 
		for(int i = 0; i < articulos.size(); i++){
    	    if (buscarIdent == articulos[i].getIdent()){
			    cout << "Identificador existente \n";
			    encontrar = true;
			    cout << "\t Los datos del Articulos son : " << "\n \n"  ;
			    cout << "Nombre: " << articulos[i].getNombre() << endl ;
 				cout << "Identificador: " << articulos[i].getIdent()<<endl;
 				cout << "Valor: " << articulos[i].getValor()<<endl;
 				cout << "Dia de ingreso : " << articulos[i].getFecha()->getDia()<<endl;
 				cout << "Mes de ingreso : "<<articulos[i].getFecha()->getMes()<<endl;
 				cout << "Estado :  " << articulos[i].getEstado()<<endl;
				Posicion = i ; 		 
            }
        }
        cout << "\nDesea eliminar el Articulo? " << endl ;
		cout << "1. Si " << endl ;
		cout << "2. No " << endl ;
				
		cin >> confirmacion ;
			
		switch(confirmacion) {
			case 1 : { // si
				articulos.erase(articulos.begin()+Posicion, articulos.begin()+(Posicion+1)) ;
				cout << "\nEl Articulo ha sido eliminado " << endl ;
				Eliminado = true ;
				break;
			}
					
			case 2 : { // no
				cout << "\nTe estamos devolviendo al menu de eliminar" << endl ;
				break;
			}
					
			default : {
				cout << "\nOpcion incorrecta" << endl ;
				system("pause") ;
				system("cls") ;
				break;
			}
		}
    }
    
    if (Eliminado == true) {
    	this->guardarArticulo(articulos); 
	}
}

/**************************** Modificar **********************************/

/*********************** Modificar estudiantes ********************************************/

void Archivo::modificarEstudiante(vector<Estudiante> estudiantes){
	cargarEstudiante(&estudiantes); 
	int buscarCodigo, confirmacion ;
	int Posicion ;
	bool encontrar = false;
	bool modificado = false ;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;
	if(estudiantes.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		cout << estudiantes.size() << endl ;
		system("pause") ; 
		for(int i = 0; i < estudiantes.size(); i++){
    	    if (buscarCodigo == estudiantes[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del estudiante son : " << "\n \n"  ;
			 	cout << "Nombre: " << estudiantes[i].getNombre() << endl ;
			 	cout << "Apellido: " << estudiantes[i].getApellido() << endl ;
			 	cout << "Sexo: " << estudiantes[i].getSexo() << endl ;
			 	cout << "Edad: " << estudiantes[i].getEdad() << endl ;
			 	cout << "Cedula: " << estudiantes[i].getCedula() << endl ;
			 	cout << "Telefono: " << estudiantes[i].getTelefono() << endl ;
			 	cout << "Codigo: " << estudiantes[i].getCodigo() << endl ;
			 	cout << "Plan: " << estudiantes[i].getPlan() << endl ;
			 	cout << "Activo: " << estudiantes[i].getActivo() << endl ;
			 	cout << "Semestre : " << estudiantes[i].getSemestre() << endl ;	
				Posicion = i ;
			}
        }
        string nombre,apellido;
        char sexo;
        int edad,cedula,telefono,codigo,plan,semestre;
        
        cout << "\nDesea modificar este estudiante? " << endl ;
		cout << "1. Modificar Nombre   " << endl ;
		cout << "2. Modificar Apellido " << endl ;
		cout << "3. Modificar Sexo " << endl ;
		cout << "4. Modificar Edad " << endl ;
		cout << "5. Modificar Cedula " << endl ;
		cout << "6. Modificar Telefono " << endl ;
		cout << "7. Modificar Codigo " << endl ;
		cout << "8. Modificar Plan " << endl ;
		cout << "9. Modificar Semestre " << endl ;
		cin >> confirmacion ;
			
		switch(confirmacion) {
			case 1 : { // Nombre
					 cout << "Modificar Nombre" << endl;
					 cin >>nombre ;  	
					 estudiantes[Posicion].setNombre(nombre);
					 cout << "Realizado " << endl ; 
				break;
			}
					
			case 2 : { // Apellido
					cout <<"Modificar Apellido" << endl; 
				    cin >>apellido ;  	
					estudiantes[Posicion].setApellido(apellido);
					cout << "Realizado " << endl ; 	
				break;
			}
			
			case 3 : { // Sexo
					 cout <<"Modificar Sexo" << endl; 
					 cin >>sexo ;  	
					 estudiantes[Posicion].setSexo(sexo);
					 cout << "Realizado " << endl ; 
				break;
			}
			
			case 4 : { // Edad
					 cout <<"Modificar Edad" << endl; 
                     cin >>edad ;  	
					 estudiantes[Posicion].setEdad(edad);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 5 :{// Cedula
					 cout <<"Modificar Cedula" << endl; 
                     cin >>cedula ;  	
					 estudiantes[Posicion].setCedula(cedula);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 6 : {// Telefono
			         cout <<"Modificar Telefono" << endl; 
                     cin >>telefono ;  	
					 estudiantes[Posicion].setTelefono(telefono);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 7 : {//Codigo
					 cout <<"Modificar Codigo" << endl; 
                     cin >>codigo ;  	
					 estudiantes[Posicion].setCodigo(codigo);
					 cout << "Realizado " << endl ; 
				break;
			}
			
			case 8 : {//Plan
				     cout <<"Modificar Plan" << endl; 
                     cin >>plan ;  	
					 estudiantes[Posicion].setPlan(plan);
					 cout << "Realizado " << endl ; 
				
				break;
			}
					
			case 9 : {//Semestre
				     cout <<"Modificar Semestre" << endl; 
				     cin >>semestre ;  	
				   	 estudiantes[Posicion].setSemestre(semestre);
					 cout << "Realizado " << endl ;  
				break;
			}
			
			default : {
				cout << "\nOpcion incorrecta" << endl ;
				system("pause") ;
				system("cls") ;
				break;
			}
		}
    }
    Archivo crear;
    crear.guardarEstudiante(estudiantes); 
}

/*********************** Modificar profesores ********************************************/

void Archivo::modificarProfesor(vector<Profesor> profesores){
	cargarProfesor(&profesores); 
	int buscarCodigo, confirmacion ;
	int Posicion ;
	bool encontrar = false;
	bool modificado = false ;
    cout << "Digite codigo a buscar : ";
	cin>>buscarCodigo;
	if(profesores.empty()){ // verificar si tiene elementos el vector
	   cout << "No hay codigo \n";
	}else {
		cout << profesores.size() << endl ;
		system("pause") ; 
		for(int i = 0; i < profesores.size(); i++){
    	    if (buscarCodigo == profesores[i].getCodigo()){
			    cout << "Codigo existente \n";
			    encontrar = true;
			    cout << "\t Los datos del Docente son : " << "\n \n"  ;
			 	cout << "Nombre: " << profesores[i].getNombre() << endl ;
			 	cout << "Apellido: " << profesores[i].getApellido() << endl ;
			 	cout << "Cedula: " << profesores[i].getCedula() << endl ;
			 	cout << "Sexo: " << profesores[i].getSexo() << endl ;
			 	cout << "Telefono: " << profesores[i].getTelefono() << endl ;
			 	cout << "Edad: " << profesores[i].getEdad() << endl ;
				cout << "Codigo: " << profesores[i].getCodigo() << endl ;
			 	cout << "Titulo: " << profesores[i].getTitulo() << endl ;
				Posicion = i ;
			}
        }
        string nombre,apellido,titulo;
        char sexo;
        int edad,cedula,telefono,codigo;
        
        cout << "\nDesea modificar este profesor? " << endl ;
		cout << "1. Modificar Nombre   " << endl ;
		cout << "2. Modificar Apellido " << endl ;
		cout << "3. Modificar Cedula " << endl ;
		cout << "4. Modificar Sexo " << endl ;
		cout << "5. Modificar Telefono " << endl ;
		cout << "6. Modificar Edad " << endl ;
		cout << "7. Modificar Codigo " << endl ;
		cout << "8. Modificar Titulo " << endl ;
		cin >> confirmacion ;
			
		switch(confirmacion) {
			case 1 : { // Nombre
					 cout << "Modificar Nombre" << endl;
					 cin >>nombre ;  	
					 profesores[Posicion].setNombre(nombre);
					 cout << "Realizado " << endl ; 
				break;
			}
					
			case 2 : { // Apellido
					cout <<"Modificar Apellido" << endl; 
				    cin >>apellido ;  	
					profesores[Posicion].setApellido(apellido);
					cout << "Realizado " << endl ; 	
				break;
			}
			
			case 3 : { // Cedula 
					 cout <<"Modificar Cedula" << endl; 
					 cin >>cedula ;  	
					 profesores[Posicion].setCedula(cedula);
					 cout << "Realizado " << endl ; 
				break;
			}
			
			case 4 : { // sexo
					 cout <<"Modificar Sexo" << endl; 
                     cin >>sexo ;  	
					 profesores[Posicion].setSexo(sexo);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 5 :{// Telefono
					 cout <<"Modificar Telefono" << endl; 
                     cin >>telefono ;  	
					 profesores[Posicion].setTelefono(telefono);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 6 : {// Edad
			         cout <<"Modificar Edad" << endl; 
                     cin >>edad ;  	
					 profesores[Posicion].setEdad(edad);
					 cout << "Realizado " << endl ; 
				
				break;
			}
			
			case 7 : {//Codigo
					 cout <<"Modificar Codigo" << endl; 
                     cin >>codigo;  	
					 profesores[Posicion].setCodigo(codigo);
					 cout << "Realizado " << endl ; 
					 
				break;	
			}
			
			case 8 : {//Titulo
				     cout <<"Modificar Titulo" << endl; 
                     cin >>titulo;  	
					 profesores[Posicion].setTitulo(titulo);
					 cout << "Realizado " << endl ; 
				
				break;
			}
					
			default : {
				cout << "\nOpcion incorrecta" << endl ;
				system("pause") ;
				system("cls") ;
				break;
			}
		}
    }
    Archivo crear;
    crear.guardarProfesor(profesores); 
}


