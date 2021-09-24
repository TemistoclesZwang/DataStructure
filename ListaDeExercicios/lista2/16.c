//Leia uma letra e verifique se a letra digitada é vogal ou consoante.

	#include <stdio.h>
   
   
   void main(){
   char letra1[5];
   printf("Insira uma letra: \n");
   scanf("%s",&letra1);

   char A [] = "a";
   char E [] = "e";
   char I [] = "i";
   char O [] = "o";
   char U [] = "u";

   int comparar1 = strcmp (letra1,A);
   int comparar2 = strcmp (letra1,E);
   int comparar3 = strcmp (letra1,I);
   int comparar4 = strcmp (letra1,O);
   int comparar5 = strcmp (letra1,U);
   
   if (comparar1 == 0)
   {
      printf("É uma vogal \n");
   }else if (comparar2 == 0)
   {
      printf("É uma vogal \n");
   }else if (comparar3 == 0)
   {
      printf("É uma vogal \n");
   }else if (comparar4 == 0)
   {
      printf("É uma vogal \n");
   }else if(comparar5 == 0)
   {
      printf("É uma vogal \n");
   }else
   {
      printf("Não é uma vogal \n");

   }

   }