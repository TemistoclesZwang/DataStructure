#include <stdio.h>
#include <string.h>

void main()
{
   float altura[15];
   float peso[15];
   char nome[10];

   if (strcmp(nome, "FIM") != 0)
   {

      int numero_candidatas;
      printf("São quantas candidatas? \n");
      scanf("%i", &numero_candidatas);

      int i;
      for (i = 1; i <= numero_candidatas; i++)
      {

         printf("Insira o nome, altura e peso da candidata %i: \n", i);
         scanf(" s% %f %f", &nome[i], &altura[i], &peso[i]);
      }

      int j;
      for (j = 1; j <= numero_candidatas; j++)
      {
         printf("Candidata: %s altura: %0.2f peso: %0.2f\n", nome, altura[j], peso[j]);
      }
   }
   else if (strcmp(nome, "FIM") != 0)
   {
      printf("Ecerrando");
   }
}

// Como comparar cada item dentr do array ?