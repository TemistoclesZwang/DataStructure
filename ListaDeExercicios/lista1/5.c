
#include <stdio.h>

main()
{
   int entrada;
   printf("Insira o número desejado: ");
   scanf("%i", &entrada);

   int unidade = entrada % 10;
   // printf("unidade: %i\n", unidade);

   int dezena1 = (entrada - unidade) / 10;
   int dezena2 = dezena1 % 10;
   // printf("dezena: %i\n",dezena2);

   int centena = (dezena1 - dezena2) / 10;
   // printf("Centena %i\n", centena);

   printf("Invertido: %i%i%i\n", unidade, dezena2, centena);


}