/*
 ============================================================================
 Name        : TematresEjercicio3-1.c
 Author      : Julian E Fernandez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {
	setbuf(stdout, NULL);
	float numeroUno;

	printf("Intruduzca un numero flotante\n");
	scanf("%f", &numeroUno);

	printf("El numero flotante es %f\n", numeroUno);
	return 0;
}


