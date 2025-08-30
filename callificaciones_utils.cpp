#include "calificaciones_utils.h"
#include <iostream>

double calcularPromedio(const double arreglo[], int tamano) {
    double suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += arreglo[i];
    }
    return suma/tamano;
}

double obtenerNotaMinima(const double arreglo[], int tamano) {
    double minima = arreglo[0];
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] < minima) {
            minima = arreglo[i];
        }
    }
    return minima;
}

double obtenerNotaMaxima(const double arreglo[], int tamano) {
    double maxima = arreglo[0];
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] > maxima) {
            maxima = arreglo[i];
        }
    }
    return maxima;
}

int contarAprobados(const double arreglo[], int tamano) {
    const double NOTA_APROBATORIA = 3.0;
    int contador = 0;
    for (int i = 0; i < tamano; i++) { // < para no recorrer un paso más y quedarme fuera de rango
        if (arreglo[i] >= NOTA_APROBATORIA) { // >= porque 3.0 también es aprobado
            contador++;
        }
    }
    return contador;
}