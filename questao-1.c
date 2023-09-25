#include <stdio.h>
#include <stdlib.h>

int main(){
    int val_int[3],menor;

    for(int i=0; i<3; i++){
        printf("Digite um valor:\n");
        scanf("%d",&val_int[i]);
    }

    menor = val_int[0];

    for(int i=1; i<3; i++){
        if(val_int[i] < menor){
            menor = val_int[i];
        }
    }

    printf("O menor valor:%d\n",menor);
}