//ESTE ES EL QUE FUNCIONA
#include "polinomio.h"
#include <stdlib.h>
#include <locale.h>

/*Esta funci�n pregunta al usuario el grado del polinomio y reserva espacio
  de acuerdo a lo que conteste*/
POLI crear(){
	POLI a; //Se declara el polinomio con el tipo de la estructura
	int grado; //Auxiliar para guardar los t�rminos del polinomio
	printf("\n\t\t�Cu�l es el grado del polinomio? ");
	scanf("%d", &grado);
	
	//A los t�rminos se le suma uno por que si el polinomio es grado 2, no est� contando el elemento x^0
	a.terminos = grado + 1;
	
	//Se va a reservar memoria del tama�o de los t�rminos del polinomio
	a.datos = (float*)malloc(sizeof(float)*a.terminos);
	return a;
}

//Esta funci�n libera el espacio que se reserv� con malloc
void liberar(POLI *a){
	free(a->datos);
}

/*La funci�n leer pregunta al usuario el valor de cada elemento del polinomio
  y lo guarda en su respectivo lugar*/
void leer(POLI *a){
	for(int i = 0; i < a->terminos; i++){
		printf("\t\t\tIngrese el valor de x^%d: ", a->terminos - i - 1);
		scanf("%f", &a->datos[i]);
	}
}

//Esta funci�n imprime un polinomio incluyendo el x^n y tomando el cuenta el signo
void imprimir(POLI a){
	printf("%f x^%d ", a.datos[0], a.terminos - 1);
	for(int i = 1; i < a.terminos; i++){
		if(a.datos[i] < 0) printf("- %f x^%d ", a.datos[i] * -1, a.terminos - i - 1);
		if(a.datos[i] > 0) printf("+ %f x^%d ", a.datos[i], a.terminos - i - 1);
		if(a.datos[i] == 0) printf("+ 0 x^%d ", a.terminos - i - 1);
	}
}

/*En esta funci�n se suma cada t�rmino del polinomio y se guarda en su respectivo lugar
  del polinomio resultante*/
void suma(POLI *a, POLI *b, POLI *c){
	for(int i = 0; i < a->terminos; i++)
		c->datos[i] = a->datos[i] + b->datos[i];
}

/*En esta funci�n se resta cada t�rmino del polinomio y se guarda en su respectivo lugar
  del polinomio resultante*/
void resta(POLI *a, POLI *b, POLI *c){
	for(int i = 0; i < a->terminos; i++)
		c->datos[i] = a->datos[i] - b->datos[i];
}
