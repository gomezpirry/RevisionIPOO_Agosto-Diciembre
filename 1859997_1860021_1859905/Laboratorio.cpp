/**
 *
 * @archivo Laboratorio.cpp
 *
 */

/** Incluimos las librerias*/
#include "Laboratorio.h"
#include <string>

/** @brief constructor por defecto*/
Laboratorio::Laboratorio() {
	
}	

/*************************************************************************************************************************************             
*                                        Metodos registrar																			 *															
*************************************************************************************************************************************/

/*************************************** Registrar Estudiante *************************************************************************/


/*! \brief registrar estudiante
 *  solicita los datos de un estudiante
 *
 * \param[cin] digitar informacion de Estudiante
 */
void Laboratorio::registrarEstudiantes() {
	
	system("cls"); 
	
	Estudiante EstudianteNuevo ;  //! < objeto estudiante 
	string Nombre, Apellido ;     //!< variables Nombre y apellido
	char Sexo ;					 //!< variable sexo del estudiante
	int Edad, Cedula, Telefono, Codigo, Semestre, Plan ;  //!< variables de estudiante
	

	cout << "Ingrese su nombre: " << endl ;
	cin  >> Nombre ;
	
	cout << "Ingrese su Apellido:" << endl ;
	cin  >> Apellido ; 
	
	cout << "Ingrese su sexo:" << endl ;
	cin  >> Sexo ;
	
	cout << "Ingrese Edad:" << endl ;
	cin  >> Edad ;
	
	cout << "Ingrese su Cedula: " << endl ;
	cin  >> Cedula ;
	
	cout << "Ingrese su Telefono:" << endl ;
	cin  >> Telefono ;
	
	cout << "Ingrese su Codigo:" << endl ;
	cin  >> Codigo ;
	
	cout << "Ingrese su semestre:" << endl ;
	cin  >> Semestre ;
	
	cout << "Ingrese su Plan:" << endl ;
	cin  >> Plan ;
	
	/*! \brief solicita los datos de un estudiante
     *
     * metodos sets para digitar informacion de estudiante
     */
	EstudianteNuevo.setNombre(Nombre) ;
	EstudianteNuevo.setApellido(Apellido) ;
	EstudianteNuevo.setSexo(Sexo) ;
	EstudianteNuevo.setEdad(Edad) ;
	EstudianteNuevo.setCedula(Cedula) ;
	EstudianteNuevo.setTelefono(Telefono) ;
	EstudianteNuevo.setCodigo(Codigo) ;
	EstudianteNuevo.setSemestre(Semestre);
	EstudianteNuevo.setPlan(Plan) ;
	EstudianteNuevo.setActivo(true) ;   //!< un estudiante nuevo sera siempre "activo" (true) 
	
	/*! \brief guarda en un vector
     *
     * \param[.push_back] ingresa un nuevo estudiante al vector
     */
	this->estudiantes.push_back(EstudianteNuevo) ;   //!< guardar estudiante nuevo en un vector 
	
	/** creamos un objeto Archivo */
	Archivo Crear ;
	Crear.guardarEstudiante(this->estudiantes) ; //!< llamamos al metodo guardar estudiantes para agregarlo al vector del archivo .csv
	
	cout << "\nRegistro exitoso \n\n" ;
	system("pause") ; 
}


/*************************************** Registrar Profesor *************************************************************************/

/*! \brief registrar profesor
 *  solicita los datos de un profesor
 *
 * \param[cin] digitar informacion del profesor
 */
void Laboratorio::registrarProfesor() {
	
	system("cls"); 
	
	Profesor ProfesorNuevo ;  				//!< objeto Profesor
	string Nombre, Apellido,titulo;         //!< variables nombre, apellido y titulo del profesor
	char Sexo ;								//!< variable sexo del profesor
	int Edad, Cedula, Telefono, Codigo;
	

	cout << "Ingrese su nombre: " << endl ;
	cin  >> Nombre ;
	
	cout << "Ingrese su Apellido:" << endl ;
	cin  >> Apellido ; 
	
	cout << "Ingrese su Titulo:" << endl ;
	cin  >> titulo ; 
	
	cout << "Ingrese su sexo:" << endl ;
	cin  >> Sexo ;
	
	cout << "Ingrese Edad:" << endl ;
	cin  >> Edad ;
	
	cout << "Ingrese su Cedula: " << endl ;
	cin  >> Cedula ;
	
	cout << "Ingrese su Telefono:" << endl ;
	cin  >> Telefono ;
	
	cout << "Ingrese su Codigo:" << endl ;
	cin  >> Codigo ;
		
	/*! \brief solicita los datos de un profesor
     *
     * metodos sets para digitar informacion de profesor
     */
	ProfesorNuevo.setNombre(Nombre) ;
	ProfesorNuevo.setApellido(Apellido) ;
	ProfesorNuevo.setTitulo(titulo) ;
	ProfesorNuevo.setSexo(Sexo) ;
	ProfesorNuevo.setEdad(Edad) ;
	ProfesorNuevo.setCedula(Cedula) ;
	ProfesorNuevo.setTelefono(Telefono) ;
	ProfesorNuevo.setCodigo(Codigo) ;
	
	/*! \brief guarda en un vector
     *
     * \param[.push_back] ingresa un nuevo profesor al vector
     */
	this->profesores.push_back(ProfesorNuevo) ;   //!< guardar profesor nuevo en un vector
	
	/** creamos un objeto Archivo */
	Archivo Crear ;
	Crear.guardarProfesor(this->profesores) ; 	//!< llamamos al metodo guardar profesor para agregarlo al vector del archivo .csv
	
	cout << "\nRegistro exitoso \n\n" ;
	system("pause") ; 
	
}

/*************************************** Registrar Articulo *************************************************************************/

/*! \brief registrar articulo
 *  solicita los datos de un articulo
 *
 * \param[cin] digitar informacion del articulo
 */
void Laboratorio::registrarArticulos() {		
	
	Articulo ArticuloNuevo ; 
	Profesor*	profesorAsignado;		//!< objeto articulo
	bool  estado ; 						//!< estado del articulo
	string nombre; 						//!< nombre del articulo
    int ident, valor, dia, mes, anio ;	//!< relaciones con la clase Fecha
	

	cout << "Ingrese nombre: " << endl ;
	cin  >> nombre ;
	
	cout << "Ingrese identificador:" << endl ;
	cin  >> ident ; 
	
	cout << "Ingrese valor:" << endl ;
	cin  >> valor ;
	
	cout << "Ingrese dia ingreso:" << endl ;
	cin  >> dia ;
	
	cout << "Ingrese mes ingreso: " << endl ;
	cin  >> mes ;
	
	cout << "Ingrese anio ingreso :" << endl ;
	cin  >> anio  ;
	
	cout<< "Profesor a cargo : " << endl;
		
	/*! \brief solicita los datos de un articulo
     *
     * metodos sets para digitar informacion de articulo
     */
     
    ArticuloNuevo.asignarProfesor(profesorAsignado);
	ArticuloNuevo.setNombre(nombre) ;
    ArticuloNuevo.setIdent(ident) ;
	ArticuloNuevo.setValor(valor) ;
	ArticuloNuevo.getFecha()->setDia(dia);
    ArticuloNuevo.getFecha()->setMes(mes) ;
	ArticuloNuevo.getFecha()->setAnio(anio) ;
	ArticuloNuevo.setEstado(true) ;
	
	
	/*! \brief guarda en un vector
     *
     * \param[.push_back] ingresa un nuevo articulo al vector
     */
	this->articulos.push_back(ArticuloNuevo);	 //!< guardar articulo nuevo en un vector
	
	/** creamos un objeto Archivo */
	Archivo Crear ;
	Crear.guardarArticulo(this->articulos) ; 	//!< llamamos al metodo guardar articulo para agregarlo al vector del archivo .csv
	
	cout << "\nRegistro exitoso \n\n" ;
	system("pause") ; 
	
	/** creamos un objeto Archivo */
	
	Archivo nuevo ;
	nuevo.guardarArticulo(this->articulos) ; 	//!< llamamos al metodo guardar articulo para agregarlo al vector del archivo .csv
	
	cout << "\nRegistro exitoso \n\n" ;
	system("pause") ; 
}


/*************************************************************************************************************************************             
*                                        Metodos cargar												        						 *															
*************************************************************************************************************************************/

/*************************************** Cargar Estudiante *************************************************************************/

/*! \brief cargar estudiante
 *  carga los datos de un estudiante
 *
 * \param[cin] digitar informacion de Estudiante
 */
void Laboratorio::cargarEstudiante(){
	Archivo Crear ; 
	this->estudiantes.clear() ;
	Crear.cargarEstudiante(&this->estudiantes) ; 
	if(estudiantes.empty()){
		cout << "No hay estudiantes" << endl;
	}
	cout << "\n Carga Exitosa \n\n" ;
	system("pause") ; 

}


/*! \brief cargar Laboratorio
 *  carga los datos del laboratorio
 *
 * \param[cin] digitar informacion de laboratorio
 */
void Laboratorio::cargarLaboratorio(){
	Archivo Crear ; 
	this->informaciones.clear() ;
	Crear.cargarInfo(&this->informaciones) ;
	if(informaciones.empty()){
		cout<<"No hay informacion" << endl;
	}else{
		int itera = 1;
		this->informaciones.pop_back() ; 
		for(int i=0 ; i < (this->informaciones.size()) ;i+=2){
			cout << "\t Informacion numero : " << itera << "\n \n";	
			cout<< this->informaciones[i] << ":"<< this->informaciones[i+1]<<endl;
			itera++;
		   }
		cout << "\n Carga Exitosa \n\n" ;
	}
	
	system("pause") ; 
}

/*! \brief cargar profesor
 *  carga los datos del profesor
 *
 * \param[cin] digitar informacion de profesor
 */
void Laboratorio::cargarProfesor(){
	Archivo Crear ; 
	this->profesores.clear() ;
	Crear.cargarProfesor(&this->profesores) ;
	if(profesores.empty()){
		cout<<"No hay Profesores" << endl;
	}else{
			cout << "\n Carga Exitosa \n\n" ;
		 }
	
	system("pause") ; 
}

/*! \brief cargar articulo
 *  carga los datos del articulo
 *
 * \param[cin] digitar informacion de articulo
 */
void Laboratorio::cargarArticulo(){	
    Archivo Crear ; 
	this->articulos.clear() ;
	Crear.cargarArticulo(&this->articulos) ; 
	if(articulos.empty()){
		cout << "No hay articulos" << endl;
	}
	cout << "\n Carga Exitosa \n\n" ;
	system("pause") ; 
}


/*! \brief consultar estudiante
 *  carga los datos del estudiante
 *
 * \param[cin] digitar informacion de estudiante
 */
void Laboratorio::consultarEstudianteInter(){
	Archivo ayer; 
	ayer.consultar_Estudiante(this->estudiantes);
	system ("pause");
}


/*! \brief consultar profesor
 *  carga los datos del profesor
 *
 * \param[cin] digitar informacion de profesor
 */
void Laboratorio::consultarProfesorInter(){
	Archivo ayer ; 
	ayer.consultar_Profesor(this->profesores);
	system ("pause");
}


/*! \brief consultar articulo
 *  carga los datos del articulo
 *
 * \param[cin] digitar informacion de articulo
 */
void Laboratorio::consultarArticuloInter(){
	Archivo ayer ; 
	ayer.consultar_Articulo(this->articulos);
	system ("pause");
}

/** Metodos para acceder a la informacion estudiantes, profesores
 * laboratorio, articulos
 * 
 */
void Laboratorio::getEstudiante(){
	Archivo Ver ;
	Ver.MostrarEstudiante(this->estudiantes) ;
	system("pause") ; 
}

void Laboratorio::getProfesor(){
	Archivo Ver;
	Ver.MostrarProfesor(this->profesores);
	system("pause");
}

void Laboratorio::getArticulo(){
	Archivo Ver;
	Ver.MostrarArticulo(this->articulos);
	system("pause");
} 

void Laboratorio::getLaboratorio(){
	Archivo Ver;
	Ver.MostrarLaboratorio(this->informaciones);
	system("pause");
} 
//////////////////////////
void Laboratorio::elimEstudiante(){
	Archivo ayer ; 
	ayer.eliminarEstudiante(this->estudiantes);
	system ("pause");
}
void Laboratorio::elimProfesor(){
	Archivo ayer ;
	ayer.eliminarProfesor(this->profesores);
	system ("pause");
}
void Laboratorio::elimArticulo(){
	Archivo ayer ;
	ayer.eliminarArticulo(this->articulos);
	system ("pause");
} 

void Laboratorio::modEstudiante(){
	Archivo ayer ; 
	ayer.modificarEstudiante(this->estudiantes);
	system ("pause");
}

void Laboratorio::modProfesor(){
	Archivo ayer ;
	ayer.modificarProfesor(this->profesores);
	system ("pause");
}

void Laboratorio::registrarInformaciones(){
	
	string nombre, contenido;
	
	nombre="Nombre";
	this->informaciones.push_back(nombre);
	
	contenido="Newton";
	this->informaciones.push_back(contenido);
	
	nombre="Correo";
	this->informaciones.push_back(nombre);
	
	contenido="Newton@universidad.edu.co";
	this->informaciones.push_back(contenido); 
	
	nombre="Telefono";
	this->informaciones.push_back(nombre);
	
	contenido="224567";
	this->informaciones.push_back(contenido);
	
	Archivo crear;
	
	crear.guardarLaboratorio(this->informaciones);
	
}

/** @brief Destructor */
Laboratorio::~Laboratorio() {

}














