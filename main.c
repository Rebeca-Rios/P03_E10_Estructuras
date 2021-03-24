#include "polinomio.h"
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, ""); //Para incluir carácteres especiales
	
	printf("\n\tEJERCICIO 2\n");
	
	POLI a, b, c; //Declaramos tres polinomios
	
	//Se manda a llamar a las funciones para crear y leer a los polinomios con los que se va a operar
	printf("\n\tIngrese los datos del primer polinomio:\n");
	a = crear();
	leer(&a);
	printf("\n\n\tIngrese los datos del segundo polinomio:\n");
	b = crear();
	leer(&b);
	
	c = crear();
	
	//Se suman e imprime el polinomio resultante
	printf("\n\n\tSuma de los polinomios:");
	printf("\n\t\t");
	suma(&a, &b, &c);
	imprimir(c);
	
	//Se suman e imprime el polinomio resultante. Se reescriben los valores del polinomio c
	printf("\n\n\tResta de los polinomios:");
	printf("\n\t\t");
	resta(&a, &b, &c);
	imprimir(c);
	
	printf("\n\n");
	
	//Se libera la memoria ocupada por malloc
	liberar(&a);
	liberar(&b);
	liberar(&c);
}
