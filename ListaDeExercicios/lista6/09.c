   #include <stdio.h>
   
   
   void main(){
   int temp;
   printf("Insira a temperatura: \n");
   scanf("%i",&temp);
   
   float calc = (9 * temp + 160) / 5;
   
   printf("Essa temperatura em ºF é: %0.2f\n",calc);
   }
