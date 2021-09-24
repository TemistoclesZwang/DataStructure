//Sabendo  que  latão  é  constituído  de  70%  de  cobre  e  30%  de  zinco,  escreva  um programaque  calcule  a quantidade  de  cada  um  desses  componentes  para  se  obter  certa  quantidade  de  latão  (em  kg),  informada  pelo usuário

#include <stdio.h>

void main()
{
   float quilo;
   printf("Insira o kg do latão: \n");
   scanf("%f", &quilo);

   int cobre = (quilo / 100) * 700;
   int zinco = (quilo / 100) * 300;

   printf("Representa: %i cobre %i zinco\n", cobre, zinco);
}