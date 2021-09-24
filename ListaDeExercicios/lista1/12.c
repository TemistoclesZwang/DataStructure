//Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * pi*r)

#include <stdio.h>

main()
{
   int raio;

   printf("Insira o valor do raio: ");
   scanf("%i", &raio);

   float calculo = 2 * 3.14 * raio;
   printf("O resultado é: %0.2f\n ",calculo);

}