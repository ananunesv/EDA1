#include <stdio.h>

int main(){

    int idade;
    float altura; // variável tem nome, tipo e endereço de memória
    printf("Digite sua idade: ");
    scanf("%d", &idade); // utiliza-se & para acessar o endereço da mamória que é em HEXADECIMAL 
    printf("Dgite sua altura: ");
    scanf("%f", &altura);
    printf("Idade: %d, Altura: %.2f\n", idade, altura);

    return 0; 

}