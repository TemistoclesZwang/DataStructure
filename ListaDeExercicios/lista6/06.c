   #include <stdio.h>
   
   
   void main(){
   int altura;
   printf("Insira a altura: \n");
   scanf("%i",&altura);

   int base;
   printf("Insira a base: \n");
   scanf("%i",&base);
   

   int formula = base * altura;
   
   printf("Área: %i\n",formula);
   }