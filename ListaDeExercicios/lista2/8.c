//Leia dois valores e uma das seguintes operações a serem executadas (codificadas da seguinte forma: 1 –Adição, 2 –Subtração, 3 –Multiplicação e 4 –Divisão).
//Calcule e escreva o resultado dessa operação sobre os dois valores lidos

#include <stdio.h>

void main()
{
   printf("Opções: \n");
   printf("1 –Adição, 2 –Subtração, 3 –Multiplicação e 4 –Divisão\n");

   int v1, v2, op;
   printf("Insira o valor 1, valor 2 e a opção que deseja: \n");
   scanf("%i%i%i", &v1, &v2, &op);

   switch (op)
   {
   case 1:
   {
      int calc = v1 + v2;
      printf("O resultado é: %i\n", calc);
      break;
   }
   case 2:
   {
      int sub = v1 - v2;
      printf("O resultado é: %i\n", sub);
      break;
   }
   case 3:
   {
      int mult = v1 * v2;
      printf("O resultado é: %i\n", mult);
      break;
   }
   case 4:
   {
      int div = v1 / v2;
      printf("O resultado é: %i\n", div);
      break;
   }
   }
}