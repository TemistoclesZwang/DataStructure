//Leia o turno em que um aluno estuda, 
//sendo M para matutino, V para Vespertino ou N para Noturno 
//e escreva a mensagem "Bom Dia!", "Boa Tarde!", "Boa Noite!" ou "Valor Inválido!", conforme o caso

	#include <stdio.h>

   
   void main(){
   char turno[5];
   printf("Insira o turno M, V ou N: \n");
   scanf("%s",&turno);

   char comparar_m [] = "M";
   char comparar_t [] = "V";
   char comparar_n [] = "N";

   int comparar1 = strcmp (comparar_m,turno);
   int comparar2 = strcmp (comparar_t,turno);
   int comparar3 = strcmp (comparar_n,turno);

   if (comparar1 == 0)
   {
      printf("Bom dia! \n");
      
   }else if (comparar2 == 0)
   {
      printf("Boa tarde \n");
      
   }else if (comparar3 == 0)
   {
      printf("Boa noite \n");
      
   }else
   {
      printf("Valor inválido, tente outro \n");
      
   }

   }