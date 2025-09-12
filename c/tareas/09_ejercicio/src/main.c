#include "funciones.h"

int main(void){
    int a,b,c;
    printf("INGRESE EL PRIMER NUMERO");
    scanf("%d",&a);
    printf("INGRESE EL SEGUNDO NUMERO");
    scanf("%d",&b);
    menu();
    printf("INGRESE UNA OPCION\n");
    scanf("%d",&c);
    if(c==1){
        suma(a,b);
    }else if(c==2){
        resta(a,b);
    }else if(c==3){
        multiplicacion(a,b);
    }else if(c==4){
        division(a,b);
    }else{
        printf("OPCION NO VALIDA!!!\n");
    }
       
    
    return 0;
}