#include <stdio.h>
#include <string.h>

void main()
{
   char frase[20];
   char frase2[20];
   char caracter;
   int i = 0;
   int contadorChar = -1; // -1 para descontar o enter no fim da frase

   printf("Digite a frase: \n");

   while (caracter != '\n')
   {
      caracter = getchar();
      frase[i] = caracter;
      frase2[i] = caracter;
      contadorChar++;
      i++;

      // para não contar os espaços
      // if (caracter != ' ')
      // {
      // contadorChar++;
      // }
   }
   char resultado [40];
   for (int j = 0; j < contadorChar; j++)
   {
      // concatenar aqui os char da frase e frase2 para duplicar

      printf("\n%c%c",frase[j],frase2[j]);
   }
   

   }
