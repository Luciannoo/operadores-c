#include <stdio.h>
int main(){
    /*
    Atribuiçao simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */
   int num1, num2, resultado;

   num1 = 5; //valor da variável "num1"
   resultado = 15; //valor inicial da variável "resultado"
   printf("Resultado um: %d\n", resultado);

   //resultado = resultado + num1
   resultado += num1;
   printf("Resultado dois: %d\n", resultado);

   //resultado = resultado + 10
   resultado += 10;
   printf("Resultado três: %d\n", resultado);

   //resultado = resultado - 5
   resultado -= 5;
   printf("Resultado quatro: %d\n", resultado);

   //resultado = resultado * 2
   resultado *= 2;
   printf("Resultado cinco: %d\n", resultado);

   //resultado = resultado / 4
   resultado /= 4;
   printf("Resultado seis: %d\n", resultado);
}