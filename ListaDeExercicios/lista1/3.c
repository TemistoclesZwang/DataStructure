#include <stdio.h>

main(){
   int velocidade;

   printf("Insira a velocidade em km/h: ");
   scanf("%i",&velocidade);

   float calculo = velocidade / 3.6;
   printf("O resultado é: %0.2f\n",calculo);

}