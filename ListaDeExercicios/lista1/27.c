//O custo ao consumidor de um carro novo  é a soma do  custo de  fábrica com a percentagem do distribuidor e dos  impostos  (aplicados  ao  custo  de  fábrica).  Supondo  que  a  percentagem  do  distribuidor  seja  de  28%  e  os impostos  de  45%,  escreva  um programaque  leia  o  custo  de  fábrica  de  um  carro  e  escreva  o  custo  aoconsumidor.

#include <stdio.h>

void main()
{
   float custo_fabrica;
   printf("Insira o custo da fábrica: \n");
   scanf("%f", &custo_fabrica);
   
   float distribuidor = (custo_fabrica / 100) * 28;
   float impostos = (custo_fabrica / 100) * 45;
   float custo = custo_fabrica + distribuidor + impostos;


   printf("O custo será: %0.2f", custo);
}