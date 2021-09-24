//Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * pi* r3) / 3) (pi=3,14)


#include <stdio.h>
#include <math.h>


int main()
{
   int raio;

   printf("Insira o valor do raio: ");
   scanf("%i", &raio);

   float calculo = (4 * 3.14 * (pow(raio,3))) / 3;
   printf("O resultado é: %0.2f\n ",calculo);

}