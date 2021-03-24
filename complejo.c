#include "complejo.h"

#include <stdlib.h>
#include <locale.h>

/*La función leer pregunta al usuario el valor de la parte real y la
  parte imaginaria; y lo guarda en su respectivo lugar*/
void leer (COMP *a){
	printf("\t\tIngrese la parte real: ");
	scanf("%f", &a->real);
	printf("\t\tIngrese la parte imaginaria: ");
	scanf("%f", &a->imag);
}

/*Esta función imprime un número complejo tomando en cuenta los signos 
  de cada parte*/
void imprimir(COMP *a){
	printf("\n\t\t");
	if(a->real != 0) printf("%f ", a->real);
	if(a->imag != 0){
		if(a->imag < 0) printf("- %f i", a->imag * -1);
		if(a->imag > 0  &&  a->real != 0) printf("+ %f i", a->imag);
		if(a->imag > 0  &&  a->real == 0) printf("%f i", a->imag);
	}
	if(a->real == 0  &&  a->imag == 0) printf("0");
}

/*Esta función suma dos números complejos y guarda el resultado
  el otro número complejo*/
void suma(COMP *a, COMP *b, COMP *c){
	c->real = a->real + b->real;
	c->imag = a->imag + b->imag;
}

/*Esta función multiplica dos números complejos y guarda el resultado
  el otro número complejo*/
void multi(COMP *a, COMP *b, COMP *c){
	c->real = (a->real * b->real) + (a->imag * b->imag) * (-1);
	c->imag = (a->real * b->imag) + (a->imag * b->real);
}
