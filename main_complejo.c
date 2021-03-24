#include "complejo.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, ""); //Para incluir car�cteres especiales
	COMP a, b, c;
	
	printf("\n\tEJERCICIO 1\n");
	
	/*Primero se llama a la funci�n leer para obtener los datos de
	  cada n�mero complejo del usuario*/
	printf("\n\tIngrese los datos del primer n�mero complejo:\n");
	leer(&a);
	printf("\n\n\tIngrese los datos del segundo n�mero complejo:\n");
	leer(&b);
	
	//Se suman e imprime el n�mero complejo resultante
	printf("\n\tSuma: ");
	suma(&a, &b, &c);
	imprimir(&c);
	
	/*Se multiplica e imprime el complejo resultante.
	  Se reescriben los valores del complejo c*/
	printf("\n\n\tMultiplicaci�n: ");
	multi(&a, &b, &c);
	imprimir(&c);
	
	printf("\n\n");
}
