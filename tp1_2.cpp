#include <stdio.h>

int cuadradoNumero(int numero);
void cuadradoNumV(int *numero);
void mostrarDirYCont(int *numero);

int main(){
    printf("Escriba un numero para calcular su cuadrado \n");
    int numero;
    scanf("%d", &numero);                           //Pasaje por valor
    printf("%d", cuadradoNumero(numero));

    printf("\n");

    cuadradoNumV(&numero);      //Pasaje por referencia
    printf("%d", numero);

    printf("\n");

    mostrarDirYCont(&numero);   //Funcion mostrar dir y contenido

    return 0;   
}

int cuadradoNumero(int numero){

    return numero * numero;

}

void cuadradoNumV(int *numero){
    *numero = *numero * *numero;

}

void mostrarDirYCont(int *numero){
    printf("Direccion de memoria de la variable: %p\n", &(*numero));
    printf("Contenido de la variable: %d", *numero);

}