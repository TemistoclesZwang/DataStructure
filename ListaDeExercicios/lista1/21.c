#include <stdio.h>

main()
{

   int meses;
   printf("Insira a quantidade de meses: ");
   scanf("%i", &meses);

   int calculo_meses = meses / 30;
   int calculo_dias = meses % 30;

   if (calculo_meses >= 12)
   {
      int anos = calculo_meses - 11;
      printf("São %i anos ", anos);
      
   }
   

   printf("%i mês e  %i dias\n", calculo_meses, calculo_dias);

}
