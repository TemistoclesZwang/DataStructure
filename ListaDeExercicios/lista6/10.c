   #include <stdio.h>
   
   
   void main(){
   int temp;
   printf("Insira a temperatura: \n");
   scanf("%i",&temp);
   
   float calc = (5 * temp - 160) / 9;
   
   printf("Essa temperatura em °C é: %0.2f\n",calc);
   }
