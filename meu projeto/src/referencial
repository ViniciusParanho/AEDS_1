/*
 ============================================================================
 Name        : meu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void incrementarPorValor (int x){
   x++;

}
void incrementarPorReferencial (int *x)
 {
	(*x)++;
}
int main (void){
	int numero=5;
	incrementarPorValor (numero);
	printf ("Valor original; %d\n", numero);//saida origonal :5

	incrementarPorReferencial(&numero);
	printf ("Valor modificado; %d\n", numero);//saida modificado :6
	return 0 ;
}
