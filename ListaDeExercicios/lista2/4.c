	#include <stdio.h>
   
   
   void main(){
   int a1;
   printf("Insirao angulo 1: \n");
   scanf("%i",&a1);   
   
   int a2;
   printf("Insirao angulo 2: \n");
   scanf("%i",&a2);
   
   int a3;
   printf("Insirao angulo 3: \n");
   scanf("%i",&a3);

   int triangulo = a1 + a2 + a3;
   int resultado = (triangulo == 180)?1:0;
   
   if (resultado == 1) 
   {
      if (a1 && a2 && a3 < 90){
         printf("Acutângulo\n");
      }
      else if (a1 || a2 || a3 == 90){
         printf("Retângulo\n");
      }
      else if(a1 || a2 || a3 > 90){
         printf("Obtusângulo\n");

      }
   }
   else
   {
      printf("Não formam um triângulo\n");
   }
   
   }