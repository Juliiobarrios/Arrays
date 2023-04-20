#include <stdio.h>
#include <stdlib.h>
/// INICIALIZACION de int<-(Tipo de dato) Array(nombre): ["Cantidad de elementos] = {"Los elementos dentro del array};
/// Otra forma de inicializacion : int<- (tipo de dato) Array(nombre):[Si no tiene cantidad, se analiza cuantos elementos tiene]
/// int num2[5] = {[1] = -1, [4] = 8} En la posicion 1 guarda un -1, y en la posicion 4 un 8;
/// int num []  = {[100] = -1} Se supone que tenemos 100 elementos (todos valen 0 menos la posicion 100 que vale -1)
/// INT listaDeCompras[4] = {huevos,jamon,queso,pan};   --- swith que diga que caso 1 (print) huevos, caso 2, jamon, etc
/// Con el nombre del arreglo EJ: listaDeCompras, accedo al array. listaDeCompras[3]= tomate --- Se cambia el queso x el tomate
int main()
{
    int arreglo [10]= {1,2,3,4,5,6,7,8,9,10};
    int arreglo2 [10]= {1};
    int arreglo3 [10]= {[5]= 8};
    int arreglo4 [20];
    int validos = cargarArreglo(arreglo4,20);
    return 0;
}
int cargarArreglo (int arreglo[], int dimension){
    int i=0;
    char control='s';
    while (i<dimension && control=='s' ){
        printf ("Ingrese un dato entero\n");
        scanf("%i", &arreglo[i]);
        i++;
        printf ("Quiere seguir cargando? s o n \n");
        fflush(stdin);
        scanf ("%c", &control);
    return i;h
}

void mostrarArregloInt (int arreglo[], int validos){
    int i;
    for (i=0; i<validos;i++){
        printf ("- %i -",arreglo[i] );
    }

}
