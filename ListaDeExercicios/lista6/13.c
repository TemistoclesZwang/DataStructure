   #include <stdio.h>
   
   
   void main(){
   int dia,mes,ano;
   printf("Insira o dia: \n");
   scanf("%i",&dia);

   printf("Insira o mes: \n");
   scanf("%i",&mes);

   printf("Insira o ano: \n");
   scanf("%i",&ano);

   if (dia == 0 || dia > 31)
   {
      
      printf("Data inválida \n");
   }
   

   }