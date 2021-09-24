
   #include <stdio.h>
   
   
   void main(){
   float cotacao;
   printf("Insira a cotação do dolar: \n");
   scanf("%f",&cotacao);

   int dolar;
   printf("Insira a quantia em dolar: \n");
   scanf("%i",&dolar);

   float calc = dolar * cotacao;

   printf("Valor em reais: R$ %0.2f \n",calc);
   }


