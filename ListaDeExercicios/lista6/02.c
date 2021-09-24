
   #include <stdio.h>
   
   
   void main(){
   int kmh;
   printf("Insira o valor em km/h: \n");
   scanf("%i",&kmh);
   float ms = kmh / 3.6;

   printf("%0.2f m/s \n",ms);
   }


