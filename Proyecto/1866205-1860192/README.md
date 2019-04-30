# Revision de Proyecto

## Diagrama de Clases

* La herencia no se realizan aparte en otro diagrama, en un solo diagrama se presentan las asociaciones y la herencia es un tipo de asociacion
* En terminos generales el diagrama coincide con las clases y metodos de la implementacion

# Nota: 4.0 (%40)

## 1. Registrar y modificar la información del laboratorio

* No permite registrar, ni modificar la información del laboratorio
* 
## Puntos: 0.0

## 2. Registrar nuevos artículos, profesores y estudiantes

* Permite registrar estudiantes 
* Permite registrar articulos
* No esta validando los valores numericos
* Tener en cuenta los rangos de los valores enteros, deben usar tipos de datos `unsigned` para tener un mayor rango de valores teniendo en cuentas que algunos datos no pueden ser negativos (cedula, codigo, etc)

## Puntos: 1.0

## 3. Modificar la información de artículos, profesores y estudiantes

* No muestra mensaje cuando no encuentra a un profesor, estudiante o articulo
* Debe validar los valores numericos, si se ingresa algun caracter en la busqueda se destruye el programa
* Permite modificar estudiantes, profesores y articulos
* Mientras no se encuentre el elemento que se desea modificar, no se debe guardar porque estaria guardando lo mismo (esta realizando una tarea que no hace nada) 

## Puntos: 1.0

## 4. Eliminar registro de artículos, profesores y estudiantes (Tenga en cuenta eliminar asignaciones y préstamos)

* No muestra mensaje cuando no encuentra a un profesor, estudiante o articulo
* Debe validar los valores numericos, si se ingresa algun caracter en la busqueda se destruye el programa
* Permite eliminar estudiantes, profesores y articulos
* Mientras no se encuentre el elemento que se desea modificar, no se debe guardar porque estaria guardando lo mismo (esta realizando una tarea que no hace nada) 

## Puntos: 1.0

## 5. Cargar la información del laboratorio, artículos, profesores y estudiantes

* Estan lo metodos para cargar la información pero esta comentado el llamado a los metodos, al parecer porque no estaba cargando la ruta de los archivos
* Los metodos estan bien pero no se estan llamando por lo tanto la aplicación no realiza este proceso
  
## Puntos: 0.7

## 6. Cada  vez  que  se  realice  cualquier  operación  se  debe  guardar  en  archivos  para  que persista

* La aplicación esta guardando la información despues de cualquier operación

## Puntos: 1.0

## 7. Asignar un artículo a un profesor o modificar la asignación si ya se encuentra asignado

* Agrega el codigo del profesor pero no muestra un mensaje de rror en caso de que no exista
* La modificación de la asignacion no se esta haciendo de forma correcta, Esta recorriendo el vector de muebles buscando un mueble que tenga el codigo del profesor. Lo que deberia hacer era buscar el profesor por coidog y si existe cambiar el profesor que tiene el articulo  

## Puntos: 0.5
   
## 8. Consultar los artículos asignados que tiene un profesor mediante su identificación

* No esta implementada esta función

## Puntos: 0.0
   
## 9.  Consultar a quien se encuentra asignado un artículo mediante el identificador del artículo

* Esta función esta implementada

## Puntos: 1.0
    
## 10. Registrar el préstamo de un artículo a un estudiante

* No valida que sean valores numericos los codigos
* No muestra un mensaje al usuario en caso de que el estudiante o el profesor no existan
* Esta implementada esta funcion
* * La fecha es incorrecta, debes ver como se esta convirtiendo 
  
## Puntos: 1.0
    
## 11. Registrar la devolución de un artículo por parte de un estudiante

* No esta implementada esta funcion

## Puntos: 0.0
    
## 12. Generar multa en caso de que el estudiante se demore en la devolución del artículo

* No esta implementada esta función

## Puntos: 0.0
    
## 13. Ingresar el pago de una multa por parte de un estudiante

* Al no generar multa esta opcion es inservible apesar de la implementacion
* En caso de que el pago del estudiante sea menor al de la multa, la multa se vuelve negativa

## Puntos: 0.0
    
## 14. Consultar el historial de préstamo de un artículo mediante el identificador del artículo

* Esta funcion no esta implementada

## Puntos: 0.0
    
## 15. Consultar el historial de préstamo de un estudiante mediante el código de identificación

* No valida que sean valores numericos los codigos
* No muestra un mensaje al usuario en caso de que el estudiante no exista
* Esta funcion esta implementada 
  
## Puntos: 1.0
    
## 16. Consultar si un estudiante tiene multa y si esta habilitado para préstamo

* Consulta la multa pero no indica si esta habilitado
  
## Puntos: 0.5
    
## 17. Consultar todos los préstamos realizados durante unas fechas establecidas

* No esta implementada esta funcion

## Puntos: 0.0
    
## 18. Consultar el valor de todos los artículos, su depreciación y si se encuentran activos

* No valida que sean valores numericos los codigos
* No muestra un mensaje al usuario en caso de que el articulo no exista
* La funcion esta implementada

## Puntos: 1.0
    
## 19. Consultar que artículos se encuentran activos y cuales inactivos

* Esta la implementación para la busqueda de un articulo pero no genera un listado de la disponibilidad de articulos

## Puntos: 0.0

## Comentarios generales

* Los identificadores de los métodos deben comenzar en miníscula
* Los include no llevan ;
* Los menu no tienen opcion para volver atras
* No olviden validar siempre los datos ingresados por el usuario (que sean numericos, que esten en los rangos de valores permitidos)
* Cuando una operacion no se puede realizar deben avisarle al usuario que fallo

* Puntos Totales: 9.7
### Nota (60%): 2.55

## Nota Final: 3.13