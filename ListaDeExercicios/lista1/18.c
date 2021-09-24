//Leia um valor em m, calcule e escreva o equivalente em cm.



#include <stdio.h>

main()
{
   int metros;

   printf("Insira o valor do metros: ");
   scanf("%i", &metros);

   int calculo = metros * 100;
   printf("O resultado é: %i\n ",calculo);

}
