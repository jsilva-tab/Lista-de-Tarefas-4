#include <stdio.h>
#include <stdlib.h>

int main(){
    float sal_med,perc;

    puts("Informe o seu saldo medio:");
    scanf("%f",&sal_med);

    if(sal_med >= 201.00 && sal_med < 400.00){
        perc = sal_med + (sal_med*0.2);
        printf("Saldo medio: R$%.2f\nValor do credito (20%): R$%.2f\n",sal_med,perc);
    } else if(sal_med >= 401.00 && sal_med < 600.00){
        perc =  sal_med + (sal_med*0.3);
        printf("Saldo medio: R$%.2f\nValor do credito (30%): R$%.2f\n",sal_med,perc);
    } else if(sal_med >= 600.00){
        perc = sal_med + (sal_med*0.4);
        printf("Saldo medio: R$%.2f\nValor do credito (40%): R$%.2f\n",sal_med,perc);
    } else{
        printf("Voce nao recebera o credito.\nSaldo: R$%.2f\n",sal_med);
    }
}