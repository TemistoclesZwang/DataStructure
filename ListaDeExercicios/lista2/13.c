//Leia os coeficientes (A, B e C) de uma equações de 2° grau e escreva suas raízes. Vale lembrar que o coeficiente A deve ser diferente de 0(zero)

	#include <stdio.h>
	#include <math.h>
   
   
   void main(){
   int a,b,c;
   printf("Insira os coenficientes a,b e c \n");
   scanf("%i %i %i",&a,&b,&c);

   int raiz_a = sqrt(a);
   int raiz_b = sqrt(b);
   int raiz_c = sqrt(c);


   if (a == 0)
   {
   printf("Insira um número diferente de zero\n");
   }
   else
   {
   printf("Resultados: a: %i b: %i c: %i\n",raiz_a,raiz_b,raiz_c);
   }
   
   }