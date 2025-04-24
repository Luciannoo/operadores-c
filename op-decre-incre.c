#include <stdio.h>
int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremeno a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int num1 = 1, resultado;
    printf("Antes incremento: %d\n", num1);
    //num1 = num1 + 1;
    //num1 += 1;
    //resultado = num1;
    //num1
    resultado = num1++;
    // printf("Pós incremento: %d\n", num1);
    printf("Após Pós-incremento - Num1: %d - Resultado: %d\n", num1, resultado);
    resultado = ++num1;
    printf("Após Pré-incremento - Num1: %d - Resultado: %d\n", num1, resultado);

    //num1 = num1 - 1
    //num1 -= 1
    // num1 --;
    // printf("Pós decremento: %d\n", num1);

    printf("Pós e Pré Decremento: \n");

    resultado = num1--;
    printf("Após Pós-decremento - Num1: %d - Resultado: %d\n", num1, resultado);

    resultado = --num1;
    printf("Após Pré-decremento - Num1: %d - Resultado: %d\n", num1, resultado);
}