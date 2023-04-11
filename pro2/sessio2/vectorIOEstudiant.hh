#ifndef VECTOR_TO_ESTUDIANT
#define VECTOR_TO_ESTUDIANT

#include <iostream>
#include <vector>
#include "Estudiant.hh"

using namespace std;

void leer_vector_estudiant(vector<Estudiant>& est);
//pre: entrada de una vector de Estudiante tamaño n;
//pos: rellena el vector con los datos de entreada;
void redondear_vector_estudiant(vector<Estudiant>& est);
//pre: entrada de un vector con datos sin redondear;
//pos: salida del vector con los datos redondeados cuando sea conveniente
void escribir_vector_estudiant(const vector<Estudiant>& est);
//pre: entrada del vector;
//pos: escribe todos las informaciones del vector Estudiante.

# endif
