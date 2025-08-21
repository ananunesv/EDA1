#include <stdio.h>

int main(){
int operacao = 0;

while(operacao != 5){
    printf("\nBem vindo a calculadora em C\n \n selecione uma operação matemática: \n 1 - Adicao \n 2 - Subtracao \n 3 - Multipicacao \n 4 - Divisao \n 5 - sair\nOperacao: ");
    scanf("%d", &operacao);
    while (getchar()!= '\n'){}
    
    while (operacao == 0 || operacao > 5 && operacao!=0){
        printf("\nDigite apenas as opcoes disponiveis!\n");
        printf("\nBem vindo a calculadora em C\n \n selecione uma operação matemática: \n 1 - Adicao \n 2 - Subtracao \n 3 - Multipicacao \n 4 - Divisao \n 5 - sair\nOperacao:  ");
        scanf("%d", &operacao);
        while (getchar()!= '\n'){}
        }

    if (operacao == 5){
        printf("Volte sempre!\n");
        return 0;}
        
    float prim_num, seg_num, calculo;
    printf("Digite o 1 valor: ");
    scanf("%f", &prim_num);
    printf("Digite o 2 valor: ");
    scanf("%f", &seg_num);  
        if( operacao == 1) {
            calculo = prim_num+seg_num;}

        else if( operacao == 2){
            calculo = prim_num-seg_num;}

        else if ( operacao == 3) {
            calculo = prim_num*seg_num;}

        else if (operacao == 4){
            calculo = prim_num/seg_num;}
    printf ("o resultado é: %.2f\n", calculo);

            }
    }