   #include <stdio.h>
   void main(){
   float valor_mensal,juros;
   printf("Insira o valor mensal e a taxa de juros: \n");
   scanf("%f%f",&valor_mensal,&juros);

   float calc1 = valor_mensal * 12;
   float calc2 = ((juros * valor_mensal) / 100) * 12;
   printf("%0.2f\n", calc1 + calc2);

   
   }