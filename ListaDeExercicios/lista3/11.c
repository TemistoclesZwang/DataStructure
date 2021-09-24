#include <stdio.h>
#include <stdlib.h>


void main()
{
   int n_alunos;
   printf("Insira a quantidade de alunos: \n");
   scanf("%i", &n_alunos);

   int total_aprovados;
   int total_reprovados;
   int i;

   for (i = 1; i <= n_alunos; i++)
   {
   
   float n1, n2, n3;
   printf("Aluno%i \nInsira as notas1,notas2,notas3: \n",i);
   scanf("%f%f%f", &n1, &n2, &n3);

   int matricula;

   printf("Aluno%i \nInsira a matricula: \n",i);
   scanf("%i", &matricula);

   float media = (2 * n1) + (3 * n2) + (5 * n3) / 10;
   printf("Aluno%i \nMedia: %0.2f\n",i, media);
   if (media >= 7)
   {
      printf("_______________Aluno aprovado\n");
      total_aprovados++;
   }else
   {
      printf("_______________Aluno está reprovado\n");
      total_reprovados++;

   }
   
   
   printf("\n-------------------------------------------\n");
   
   }
   printf("Total aprovados: %i\n",total_aprovados);
   printf("Total reprovados: %i\n",total_reprovados);
   }
