	#include <stdio.h>
   
   
   void main(){
int n1,n2;
printf("Insira o número 1 e 2: \n");
scanf("%i %i",&n1,&n2);

   if (n2 + n2 < n1)
   {
      int calc = (n2+n2) + n1;
      printf("Resultado %i \n",calc);
   }else if (n2 + n2 == n1 || n2 + n2 > n1)
   {
      int calc = n2 + n2;
      printf("Resultado %i \n",calc);
   }
   }