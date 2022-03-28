#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ERROR 2
#define VALIDO 1

int esFechaValida(int dia, int mes, int anio);
int esBisiesto(int anio);

#endif // HEADER_H_INCLUDED
