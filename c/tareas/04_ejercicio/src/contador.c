#include <stdio.h>

int main(void) {
    int n; 
    printf("ingrese un numero por favor:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}
