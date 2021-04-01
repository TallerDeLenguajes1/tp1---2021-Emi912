#include <stdio.h>

int cuadradoNumero(int numero);
void cuadradoNumV(int *numero);
void mostrarDirYCont(int *numero);
void Invertir(int *a, int *b);
void Orden(int *a, int *b);


int main(){
    printf("Escriba un numero para calcular su cuadrado \n");
    int numero;
    int a, b;
    scanf("%d", &numero);                           //Pasaje por valor
    printf("%d", cuadradoNumero(numero));

    printf("\n");

    cuadradoNumV(&numero);      //Pasaje por referencia
    printf("%d", numero);

    printf("\n");

    mostrarDirYCont(&numero);   //Funcion mostrar dir y contenido

    printf("\n");

    printf("Invertir numeros a y b, escriba el valor de A\n");
    scanf("%d", &a);
    printf("Escriba el valor de B\n");
    scanf("%d", &b);
    Orden(&a, &b);
    printf("El valor de A ahora es %d, y el de B es %d", a, b);


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


void Invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void Orden(int *a, int *b){
    if (*a > *b)
    {
        Invertir(a,b);
    }
}