//Leia  um  número  inteiro  de  minutos,  calcule  e  escreva  quantos  dias,  quantas  horas  e  quantos  minutos  ele corresponde

#include <stdio.h>

main()
{
   int minutos;
   printf("Insira a quantidade de minutos: ");
   scanf("%i", &minutos);

   int calculo_minutos = minutos % 60;

   int calculo_horas = minutos / 60;
   //Um dia tem 1440 minutos
   printf("%ihoras\n%iminutos\n", calculo_horas, calculo_minutos);

   if (calculo_horas >= 24)
   {
      int dias = calculo_horas - 23;
      printf("%i dias\n", dias);
   }
}