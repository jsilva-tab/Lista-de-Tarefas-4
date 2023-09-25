#include <stdio.h>
#include <stdlib.h>

int main(){
    float ind_pol;

    puts("Insira o indice de poluicao:");
    scanf("%f",&ind_pol);

    if(ind_pol>=0.3 && ind_pol<0.4){
        puts("Industrias do 1º grupo precisam suspender suas atividades.");
    } else if(ind_pol>=0.4 && ind_pol<0.5){
        puts("Industrias do 1º e 2º grupo precisams suspender suas atividades.");
    } else if(ind_pol>=0.5){
        puts("Todos os grupos precisam paralisar suas atividades.");
    } else{
      puts("O indice de poluicao esta aceitavel.");
    }
}