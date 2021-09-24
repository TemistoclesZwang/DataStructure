#include <stdio.h>
#include <time.h>

void main()
{
   int numero_entrevistados;
   printf("Quer entrevistar quantas pessoas? \n");
   scanf("%i", &numero_entrevistados);
   srand(time(NULL));

   int i;
   int idade = 0;
   int opiniao = 0;

   int acumulador_idade_geral = 0;
   int acumulador_idade_op1 = 0;
   int acumulador_regular = 0;
   int acumulador_bom = 0;

   while (strcmp(idade, -1) != 0)
   {

   
   for (i = 1; i <= numero_entrevistados; i++)
   {
      opiniao = 1 + (rand() % 3);
      idade = rand() % 40 + 20;
      acumulador_idade_geral += idade;

      printf("\nPessoa número %i\nIdade: %i \nOpiniao: %i\n", i, idade, opiniao);
      printf("-------------------------------------------------------------\n");

      if (opiniao == 3)
      {
         acumulador_regular ++;
      }else if (opiniao == 2)
      {
         acumulador_bom ++;
      }else if (opiniao == 1)
      {
         acumulador_idade_op1 += idade;
      }
      
   }
   float calc_percentual_bom = (acumulador_bom * numero_entrevistados) / 100;
   float calc_percentual_otimo = (acumulador_idade_op1 * acumulador_idade_geral) / 100;

   printf("Percentual ótimo:%0.2f\nPercentual bom:%0.2f\nQuantidade de pessoas que respondeu regular: %i\n",calc_percentual_otimo,calc_percentual_bom,acumulador_regular);
   }
}