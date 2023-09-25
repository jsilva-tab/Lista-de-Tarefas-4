#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod,qtd;
    float pTotal;

    puts("Insira o codigo do produto:");
    scanf("%d",&cod);
    puts("Insira quantidade do produto desejada:");
    scanf("%d",&qtd);

    if(cod == 1001){
        pTotal = qtd*5.32;
        printf("Preço total dos produtos: R$%.2f\n",pTotal);
    } else if(cod == 1324){
        pTotal = qtd*6.45;
        printf("Preço total dos produtos: R$%.2f\n",pTotal);
    } else if(cod == 6548){
        pTotal = qtd*2.37;
        printf("Preço total dos produtos: R$%.2f\n",pTotal);
    } else if(cod == 987){
        pTotal = qtd*5.32;
        printf("Preço total dos produtos: R$%.2f\n",pTotal);
    } else if(cod == 7623){
        pTotal = qtd*6.45;
        printf("Preço total dos produtos: R$%.2f\n",pTotal);
    } else{
        puts("Codigo nao valido, tente novamente");
    }
}