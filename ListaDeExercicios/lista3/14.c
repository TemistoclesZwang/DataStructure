#include <stdio.h>

void main()
{
   float total_votos;
   printf("A pesquisa será com quantos entrevistados? ");
   scanf("%f", &total_votos);

   int i;

   float dilma = 0;
   float serra = 0;
   float ciro = 0;
   float indeciso = 0;
   float outros = 0;
   float nulo_branco = 0;

   for (i = 1; i <= total_votos; i++)
   {
      int opcoes;
      printf("Serra=45\nDilma=13\nCiro Gomes=23\nindeciso=99\noutros=98\nnulo/branco=0\n");
      printf("\nEntrevistado %i escolha entre as opções:\n", i);
      scanf("%i", &opcoes);

      switch (opcoes)
      {
      case 45:
         ++serra;
         break;
      case 13:
         ++dilma;
         break;
      case 23:
         ++ciro;
         break;
      case 99:
         ++indeciso;
         break;
      case 98:
         ++outros;
         break;
      case 0:
         ++nulo_branco;
         break;
      }
   }

   float calc_dilma = (dilma * total_votos) / 100;
   float calc_serra = (serra * total_votos) / 100;
   float calc_ciro = (ciro * total_votos) / 100;
   float calc_indeciso = (indeciso * total_votos) / 100;
   float calc_outros = (outros * total_votos) / 100;
   float calc_nulo_branco = (nulo_branco * total_votos) / 100;

   printf("\nTotal de votos: %1.0f\n", total_votos);

   printf("\nPorcentagem de votos dilma: %0.2f\n", calc_dilma);
   printf("Porcentagem de votos serra: %0.2f\n", serra);
   printf("Porcentagem de votos ciro: %0.2f\n", calc_ciro);
   printf("Porcentagem de votos indeciso: %0.2f\n", calc_indeciso);
   printf("Porcentagem de votos outros outros: %0.2f\n", calc_outros);
   printf("Porcentagem de votos outros nulo/brancos: %0.2f\n", calc_nulo_branco);

   float segundo_turno = total_votos / 2;
   if (calc_dilma || calc_serra || calc_ciro > segundo_turno)
   {
      printf("-----------------Não é necessário segundo turno\n");
   }
   else
   {
      printf("-----------------É necessário segundo turno\n");
   }
}