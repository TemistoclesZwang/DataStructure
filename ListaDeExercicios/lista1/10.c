#include <stdio.h>
#include <math.h>


int main(void){
   int lado;

   printf("Insira o valor do lado: \n");
   scanf("%i", &lado);


   float calculo;
   calculo = pow(lado,2);
   printf("A área é: %f\n",calculo);
   return 0;
}