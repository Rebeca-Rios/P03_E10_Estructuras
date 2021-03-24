//ESTE ES EL QUE FUNCIONA
#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <stdio.h>

struct polinomio{
	int terminos; //Guarda cuántos términos tendrá el polinomio
	float *datos; //Es apuntador porque no sabemos el tamaño. Guarda los valores del polinomio
};

typedef struct polinomio POLI;

POLI crear();
void liberar(POLI *a); //Por referencia
void leer(POLI *a); //Por referencia para poder editar las variables originales
void imprimir(POLI a);
void suma(POLI *a, POLI *b, POLI *c); //Por referencia para poder editar las variables originales
void resta(POLI *a, POLI *b, POLI *c); //Por referencia para poder editar las variables originales

#endif
