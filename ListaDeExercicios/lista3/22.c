	#include <stdio.h>
   
   
   void main(){
   int n1,n2;
   printf("Insira o número 1 e 2 (sendo o n1 maior que o n2): \n");
   scanf("%i %i",&n1,&n2);

   int i;

   for (i = 0; i <= 1000; i++)
   {
      if (n2 * i == n1)
      {
         int calc = n2 * i;
         printf("Quociente: %i\n",i);
         break;
      }
   }

   int j;

   for (j = 0; j <= 1000; j++)
   {
      if (n2 * j == n1)
      {
         printf("Não tem resto \n");
      }
   }

}
