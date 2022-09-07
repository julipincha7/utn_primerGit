/*
 ============================================================================
 Name        : ejercicio2-3.c
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

    int numeroCliente, edad, viudosMayores = 0, i = 0;
    char estadoCivil, genero, salir; // s , c , v  // f , m , o
    float temperatura;

    do{
        printf("Ingrese numero de cliente: ");
        scanf("%d" , &numeroCliente);

        printf("Ingrese estado civil (S, C o V): ");
        scanf("%c" , &estadoCivil);

        if(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v'){
            printf("ERROR: Reingrese estado civil (S, C o V): ");
            scanf("%c" , &estadoCivil);
        }

        printf("Ingrese su edad: ");
        scanf("%d" , &edad);

        if(edad < 17){
            printf("ERROR: Reingrese su edad: ");
            scanf("%d" , &edad);
        }

        printf("Ingrese su temperatura corporal: ");
        scanf("%f" , &temperatura);

        if(temperatura < 34 || temperatura > 42){
            printf("ERROR: Reingrese su temperatura corporal: ");
            scanf("%f" , &temperatura);
        };

        printf("Ingrese su genero (M, F o O): ");
        scanf("%c" , &genero);

        if(genero != 'm' && genero != 'f' && genero != 'o'){
            printf("ERROR: Reingrese estado civil (M, F o O): ");
            scanf("%c" , &genero);
        }

        if(estadoCivil == 'v' && edad > 59){
            viudosMayores++;
        }

        printf("Desea salir? s o n");
        scanf("%c" , &salir);

        i++;

    }while(salir == 's' || i == 3);

    printf("1) La cantidad de viudos mayores es de: %d" , viudosMayores);

    return 0;
};

