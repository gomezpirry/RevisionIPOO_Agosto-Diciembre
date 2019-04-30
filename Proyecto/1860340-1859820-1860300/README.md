# Revision de Proyecto

## Diagrama de Clases

* La idea de la herencia es que los metodos hereden atributos y metodos de la clase padre para ahorrar lineas de codigo. Estan reescribiendo en las clases hijas varios metodos de la clase padre
*  En terminos generales el diagrama coincide con las clases y metodos de la implementacion

# Nota (%40): 4.5

## 1. Registrar y modificar la información del laboratorio

* Permite registra y modificar información del laboratorio, pero no la esta almacenando

## Puntos: 1.0 

## 2. Registrar nuevos artículos, profesores y estudiantes

* Función implementada 

## Puntos: 1.0

## 3. Modificar la información de artículos, profesores y estudiantes

* Funcion implementada

## Puntos: 1.0

## 4. Eliminar registro de artículos, profesores y estudiantes (Tenga en cuenta eliminar asignaciones y préstamos)

* Funcion implementada
* La funcion no esta bien implementada. esta borrando dos registros con el metodo `erase` de vector, este metodo para borrar un elemento solo debe recibir un iterador con la posicion del elemento que se quiere borrar, alli le estan pasando 2 iteradores

## Puntos: 0.0  

## 5. Cargar la información del laboratorio, artículos, profesores y estudiantes

* Funcion implementada 

## Puntos: 1.0

## 6. Cada  vez  que  se  realice  cualquier  operación  se  debe  guardar  en  archivos  para  que persista

* Funcion implementada

## Puntos: 1.0 

## 7. Asignar un artículo a un profesor o modificar la asignación si ya se encuentra asignado

* Funcion implementada

## Puntos: 1.0
   
## 8. Consultar los artículos asignados que tiene un profesor mediante su identificación

* Funcion implementada
* Debe mostrar un mensaje al usuario cuando no tenga articulos asignados

## Puntos: 1.0
   
## 9.  Consultar a quien se encuentra asignado un artículo mediante el identificador del artículo

* Funcion implementada

## Puntos: 1.0
    
## 10. Registrar el préstamo de un artículo a un estudiante

* Funcion implementada
  
## Puntos: 1.0
    
## 11. Registrar la devolución de un artículo por parte de un estudiante

* Funcion implementada
* Estan copiando el vector de articulos prestados por un estudiante a otro vector temporal y borrando el elemento (nuevamente lo estan haciendo de forma incorrecta). Luego borrando los datos del vector de articulos prestados y le pasan lo datos del temporal. Estan haciendo muchas operaciones innecesarias cuando pueden borrarlo directamente del vector de articulos

## Puntos: 1.0 
    
## 12. Generar multa en caso de que el estudiante se demore en la devolución del artículo

* Funcion implementada

## Puntos: 1.0
    
## 13. Ingresar el pago de una multa por parte de un estudiante

* Funcion implementada

## Puntos: 1.0
    
## 14. Consultar el historial de préstamo de un artículo mediante el identificador del artículo

* Funcion implementada

## Puntos: 1.0 
    
## 15. Consultar el historial de préstamo de un estudiante mediante el código de identificación

* Funcion implementada

## Puntos: 1.0 
    
## 16. Consultar si un estudiante tiene multa y si esta habilitado para préstamo

* Funcion implementada

## Puntos: 1.0 
    
## 17. Consultar todos los préstamos realizados durante unas fechas establecidas

* Funcion implementada

## Puntos: 1.0 
    
## 18. Consultar el valor de todos los artículos, su depreciación y si se encuentran activos

* Funcion implementada

## Puntos: 1.0 
    
## 19. Consultar que artículos se encuentran activos y cuales inactivos

* Funcion implementada

## Puntos: 1.0 

## Comentarios generales

* La navegación en la aplicación es demasiado complicada, pude ser mas simple
* Cuando se va a modificar algun campo no le indica al usuario mediante que opcion puede modificar cierto campo
* No se debe volver a pdeir información de la fecha actual cada vez que se vaya al menu principal
* No es necesario usar memoria dinamica para variables simples como un booleano dentro de uan funcion

* Puntos Totales: 18 
### Nota (60%): 4.73

## Nota Final: 4.64