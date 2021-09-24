//Leia uma temperatura em °F, calcule e escreva a equivalente em °C.  (t°C = (5 * t°F -160) /9)

#include <stdio.h>

main()
{
   float temperatura;

   printf("Insira o valor do temperatura: ");
   scanf("%f", &temperatura);

   float calculo = (5 * temperatura - 160) / 9;
   printf("O resultado é: %0.2f\n ",calculo);

}