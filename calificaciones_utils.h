#include <string>

#ifndef CALIFICACIONES_UTILS_H
#define CALIFICACIONES_UTILS_H


// Calcular el promedio de un arreglo de calificaciones
double calcularPromedio(const double arreglo[], int tamano);

// Obtener calificacion más baja del arreglo
double obtenerNotaMinima(const double arreglo[], int tamano);

// Obtener nota más alta del arreglo
double obtenerNotaMaxima(const double arreglo[], int tamano);

// Función para contar aprobados
int contarAprobados(const double arreglo[], int tamano);

// Por qué se el arreglo se pasa como una constante
// por que es necesario el tamaño como un parametro separado

/* El arreglo se pasa como una constante pues buscamos que no sea un dato cambiado por el usuario
 * es decir, las notas que le pasemos no las vamos a cambiar en ningún momento, simplemente vamos
 * a operar con esas notas que ya tenemos para realizar las operaciones. */

/* Se pasa el tamaño del arreglo como un parametro separado pues es un dato necesario para
 * sacar el promedio, usarlo en el for para poder recorrer la cantidad de notas totales y asi
 * saber cual sea la mayor o la menor. */

#endif
