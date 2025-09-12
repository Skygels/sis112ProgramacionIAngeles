#include "funciones.h"
void menu(void){
    printf("1. suma\n2. resta\n3. multiplicacion\n4. division\n");
}
void suma(int n1,int n2){
    int respuesta=0;
    respuesta=n1+n2;
    printf("el resultado de suma es: %d\n",respuesta);
}

void resta(int a, int b){
    int respuesta=a-b;
    printf("el resultado de resta es: %d\n",respuesta);
}
void multiplicacion(int a, int b){
    int respuesta=a*b;
    printf("el resultado de multiplicacion es: %d\n",respuesta);
}
void division(int a, int b){
    if(b!=0){
        float respuesta=(float)a/(float)b;
        printf("el resultado de division es: %f\n",respuesta);
    }else{
        printf("SYNTAX ERROR!\n");
    }
}