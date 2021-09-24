//Supondo-se  que  a  população  de  uma  cidade A seja  de  200.000  habitantes,  com  uma  taxa  anual  de crescimento  na  ordem  de  3.5%,
// e  que  a  população  de  uma  cidade B seja  de  800.000  habitantes,
// crescendo  a  uma  taxa  anual  de  1.35%,
// Escreva  um programaque  determine  quantos  anos  serão necessários,
// para que a população da cidade A ultrapasse a população dacidade B.

#include <stdio.h>

void main()
{

   float populacaoB = 800.000;
   float populacaoA = 200.000;
   int anos = 0;

   while ((populacaoA < populacaoB))
   {
      
      // população B
      float calc_porcentagemB = (1.35 * 800.000) / 100;
      populacaoB += calc_porcentagemB;

      // população A
      float calc_porcentagemA = (3.5 * 200.000) / 100;
      populacaoA += calc_porcentagemA;
      anos++;
      printf("populaçãoA: %0.1f\npopulaçãoB: %0.1f\nanos: %i \n", populacaoA,populacaoB,anos);

   }


}

// será que A nunca vai acançar B já que A cresce 7 pessoas ao ano e B 10,8 ao ano