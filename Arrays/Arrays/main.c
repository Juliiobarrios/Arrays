#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
void cargarArray (int array[],int *i);
void mostrarArray (int array[], int cant);
int sumaArray (int array[], int cant);
Pila cargarPilaConArray (int arrayPila[],int cant, Pila a);
void cargarArrayFloat (float arrayFloat[], int*i);
void mostrarArrayFloat (float arrayFloat[], int cant);
float sumaArrayFloat (float arrayFloat[], int cant);
void cargarArrayChar (char arrayFloat[], int*i);
void mostrarArrayChar (char arrayFloat[], int cant);
int verificarArrayChar (char arrayFloat[], int cant,char verificar);
int main()
{
    int array[100];
    float arrayFloat[100];
    char arrayChar[100];
    int cant=0;
    char verificar;
    Pila b;
    inicpila (&b);
    //cargarArray (array, &a);
    //cargarArrayFloat (arrayFloat, &cant);
    //mostrarArray(array,a);
    //printf ("La suma de los valores dentro del Arreglo da: %i",sumaArray(array, cant));
    //printf ("A la pila se le cargaron los valores del Arreglo y quedo:");
    //b=cargarPilaConArray(array,cant,b);
    //mostrar (&b);
    //printf ("La suma de los valores dentro del Arreglo da: %f",sumaArrayFloat(arrayFloat, cant));
    cargarArrayChar (arrayChar, &cant);
    printf ("Ingrese el valor tipo 'char' que quiera verificar en su Arreglo");
    fflush(stdin);
    scanf("%c", &verificar);
    int verificarChar = verificarArrayChar (arrayChar, cant, verificar);
    if (verificarChar==1){
        printf ("En el Arreglo de tipo 'char' se encuentra el elemento a verificar, el cual es |%c|",verificar);
    }
    else {
        printf ("En el Arreglo de tipo 'char' no se encuentra el elemento a verificar, el cual es |%c|",verificar);
    }
    return 0;
}

/// Arreglos con int:

void cargarArray (int array[], int *i){
    char control='s';                                 // int array [100];
    int j=*i;                                         // int a=0;
    while (control== 's'){                            // cargarArray (array, &a);
        printf ("Ingrese un valor a su Arreglo:");    // printf ("La cantidad de valores cargados: %i",a);
        scanf ("%i", &array[j]);
        printf ("-s- Para continuar");
        fflush (stdin);
        scanf ("%c", &control);
        j++;
    }
    *i=j;
}

void mostrarArray (int array[], int cant){
    int i;
    printf("-----------------------------------------\n");
    for (i=0;i<cant;i++){
        printf ("| %i\t",array[i]);
    }
    printf("\n-----------------------------------------\n");
}

int sumaArray (int array[], int cant){
    int suma=0, i;
    for (i=0;i<cant;i++){
        suma+=array[i];
    }
    return suma;
}

/// Arreglos con float:

void cargarArrayFloat (float arrayFloat[], int*i){
    char control='s';                                 // int array [100];
    int j=*i;                                       // int a=0;
    while (control== 's'){                            // cargarArray (array, &a);
        printf ("Ingrese un valor a su Arreglo:");    // printf ("La cantidad de valores cargados: %i",a);
        scanf ("%f", &arrayFloat[j]);
        printf ("-s- Para continuar");
        fflush (stdin);
        scanf ("%c", &control);
        j++;
    }
    *i=j;
}

void mostrarArrayFloat (float arrayFloat[], int cant){
    int i;
    printf("-----------------------------------------\n");
    for (i=0;i<cant;i++){
        printf ("| %f\t",arrayFloat[i]);
    }
    printf("\n-----------------------------------------\n");
}

float sumaArrayFloat (float arrayFloat[], int cant){
    float suma=0;
    int i;
    for (i=0;i<cant;i++){
        suma+=arrayFloat[i];
    }
    return suma;
}

Pila cargarPilaConArray (int arrayPila[],int cant, Pila a){
    int i;
    for (i=0;i<cant;i++){
    apilar (&a,arrayPila[i]);
    }
    return a;
}

void cargarArrayChar (char arrayChar[], int*i){
    int control=1;                                 // int array [100];
    int j=*i;                                       // int a=0;
    while (control== 1){                            // cargarArray (array, &a);
        printf ("Ingrese un valor tipo 'char' a su Arreglo:\n");    // printf ("La cantidad de valores cargados: %i",a);
        fflush (stdin);
        scanf ("%c", &arrayChar[j]);
        printf ("-1- Para continuar");
        scanf ("%i", &control);
        j++;
    }
    *i=j;
}

void mostrarArrayChar (char arrayChar[], int cant){
    int i;
    printf("-----------------------------------------\n");
    for (i=0;i<cant;i++){
        printf ("| %c\t",arrayChar[i]);
    }
    printf("\n-----------------------------------------\n");
}

int verificarArrayChar (char arrayChar[], int cant,char verificar){
    int i;

    for (i=0;i<cant;i++){
        if (arrayChar[i] == verificar){
            return 1;
        }
    }
    return 0;
}
