#include <stdio.h>

int main (void){
    int n ;
    printf("INGRESE UN NUMERO POR FAVOR SE LO RUEGO: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}