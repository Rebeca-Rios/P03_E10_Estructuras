#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <stdio.h>

struct complejo{
	float real; //Guarda la parte real del número complejo
	float imag; //Guarda la parte imaginaria del número complejo
};

typedef struct complejo COMP;

void leer(COMP *a); //Por referencia para poder editar las variables originales
void imprimir(COMP *a);
void suma(COMP *a, COMP *b, COMP *c); //Por referencia para poder editar las variables originales
void multi(COMP *a, COMP *b, COMP *c); //Por referencia para poder editar las variables originales

#endif
