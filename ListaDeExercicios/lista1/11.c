//Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base *altura)


#include <stdio.h>

main()
{
   int base;
   int altura;

   printf("Insira o valor da base: ");
   scanf("%i", &base);
   printf("Insira o valor da altura: ");
   scanf("%i", &altura);
   
   int calculo = base * altura;
   printf("O resultado é: %i\n ",calculo);

}