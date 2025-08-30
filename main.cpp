#include <string>
#include <iostream>
#include "calificaciones_utils.h"

const int NUM_CALIFICACIONES = 5;
std::string nombreEstudiandte = "Juan Perez";
double calificaciones[NUM_CALIFICACIONES] = {2.5, 4.0, 3.0, 5.0, 3.5};

double promedio = calcularPromedio(calificaciones,NUM_CALIFICACIONES);
double notaMinima = obtenerNotaMinima(calificaciones, NUM_CALIFICACIONES);
double notaMaxima = obtenerNotaMaxima(calificaciones, NUM_CALIFICACIONES);
int aprobadas = contarAprobados(calificaciones, NUM_CALIFICACIONES);

int main() {
    std::cout << "--- Reporte de calificaciones ---" << std::endl;
    std::cout << "Estudiante: " << nombreEstudiandte << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Nota mas baja: " << notaMinima << std::endl;
    std::cout << "Nota mas alta: " << notaMaxima << std::endl;
    std::cout << "Materias aprobadas: " << aprobadas << std::endl;
}