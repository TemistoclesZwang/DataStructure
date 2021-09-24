//Leia uma temperatura em °C, calcule e escreva a equivalente em °F.  (t°F = (9 * t°C + 160) /5)

#include <stdio.h>

main()
{
   float temperatura;

   printf("Insira o valor do temperatura: ");
   scanf("%f", &temperatura);

   float calculo = (9*temperatura + 160) / 5;
   printf("O resultado é: %0.2f\n ",calculo);

}