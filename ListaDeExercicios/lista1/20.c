//Leia  um  número  inteiro  de  horas,  calcule  e  escreva  quantas  semanas,  quantos  dias  e  quantas  horas  ele corresponde.

#include <stdio.h>

main()
{
   int horas;
   printf("Insira um número inteiro: \n");
   scanf("%i", &horas);

   int calculo_horas = horas / 24;
   printf("São: %i horas \n", calculo_horas);

   int calculo_dias = 0.0416667 * horas;
   printf("São: %i dias \n", calculo_dias);

   int calculo_semanas = 0.00595238 * horas;
   printf("São: %i semanas \n ", calculo_semanas);

}




