#include <stdio.h>

int main(){
    int variable = 912;
    int *puntero_p = &variable;

    printf("\n %d Contenido del puntero", *puntero_p);  
    printf("\n %d Direccion almacenada por el puntero", puntero_p); 
    printf("\n %d Direccion de memoria de la variable a la que apunta el puntero", &variable); 
    printf("\n %d Direccion de memoria del puntero", &puntero_p); 
    printf("\n %d Tamanio de memoria ocupado por la variable ", sizeof(variable)); 


    return 0;
}