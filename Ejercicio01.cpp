#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct complejo{
	float real;
	float imag;
};

typedef struct complejo COMP;

void leer(COMP *a);
void imprimir(COMP *a);
void suma(COMP *a, COMP *b, COMP *c);
void multi(COMP *a, COMP *b, COMP *c);

int main(){
	setlocale(LC_CTYPE, "");
	COMP a, b, c;
	
	printf("\n\tEjercicio 1\n");
	
	leer(&a);
	leer(&b);
	
	printf("\n\tSuma: ");
	suma(&a, &b, &c);
	imprimir(&c);
	
	printf("\n\tMultiplicación: ");
	multi(&a, &b, &c);
	imprimir(&c);
}

void leer (COMP *a){
	printf("\n\tIngrese la parte real: ");
	scanf("%f", &a->real);
	printf("\n\tIngrese la parte imaginaria: ");
	scanf("%f", &a->imag);
}

void imprimir(COMP *a){
	printf("\n\t");
	if(a->real != 0) printf("%f ", a->real);
	if(a->imag != 0){
		if(a->imag < 0) printf("%f i", a->imag);
		if(a->imag > 0) printf("+ %f i", a->imag);
	}
	if(a->real == 0  &&  a->imag == 0) printf("0");
}

void suma(COMP *a, COMP *b, COMP *c){
	c->real = a->real + b->real;
	c->imag = a->imag + b->imag;
}

void multi(COMP *a, COMP *b, COMP *c){
	c->real = (a->real * b->real) + (a->imag * b->imag) * (-1);
	c->imag = (a->real * b->imag) + (a->imag * b->real);
}
