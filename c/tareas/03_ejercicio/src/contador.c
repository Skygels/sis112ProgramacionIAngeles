#include <stdio.h>

int main(void){
    int numeros=0;
    while(1){
        numeros++;
        printf("%d\n",numeros);
        if(numeros==100){
            break;
        }
    }
    return 0;
}