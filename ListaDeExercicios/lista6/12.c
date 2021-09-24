   #include <stdio.h>
   
   
   void main(){
   int numero;
   printf("Insira o número desejado: \n");
   scanf("%i",&numero);

   switch (numero % 2)
   {
   case 1:
   printf("É primo\n");
   break;

   case !1:
   printf("Não é primo\n");
   break;

   }

   
   }