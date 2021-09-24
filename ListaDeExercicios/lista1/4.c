// Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1º pelo2º.

#include <stdio.h>

main(){
   int n1;
   int n2;
   printf("Insira o número 1: ");
   scanf("%i",&n1);

   printf("Insira o número 2: ");
   scanf("%i",&n2);

   int resto = n1 % n2;
   printf("O resto da divisão é: %i\n", resto);

   int quociente = n1 / n2;
   printf("O quociente é: %i\n",quociente);

}