#include <stdio.h>
int main(){
    //declarando as variáveis
    int num1, num2;
    int soma, sub, multi, div;
    
    //solicitando um número
    printf("Digite um número: ", num1);
    scanf("%d", &num1);

    //solicitando um número
    printf("Digite um número: ", num2);
    scanf("%d", &num2);

    printf("*=*=*=*=*=*=*=*=*=\n");
    soma = num1 + num2; //realizando a operação de soma
    sub = num1 - num2; //realizando a operação de subtração
    multi = num1 * num2; //realizando a operação de multiplicação
    div = num1 / num2; //realizando a operação de divisão

    //executando o programa
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", sub);
    printf("A multiplicação é: %d\n", multi);
    printf("A divisão é: %d\n", div);

}