//Leia a medida de um ângulo (entre 0 e 360°) e escreva o quadrante (primeiro, segundo, terceiro ou quarto) em que o ângulo se localiza

	#include <stdio.h>
   
   
   void main(){
   int medida;
   printf("Insira a medida: (0 a 360) \n");
   scanf("%i",&medida);

   if (medida > 0 && medida <= 90)
   {
      printf("Primeiro quadrante\n ");
   }else if (medida > 90 && medida <= 180)
   {
      printf("Segundo quadrante\n ");
   } else if (medida > 180 && medida <= 270)
   {
      printf("Terceiro quadrante\n ");
   }else
   {
      printf("Quarto quadrante\n ");
   }
   
   }