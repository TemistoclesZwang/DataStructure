//Leia uma letra, verifique se letra é "F" ou "M" e escreva F -Feminino, M -Masculino, Sexo Inválido.

	#include <stdio.h>
	#include <string.h>
   
   
   void main(){
   char letra[2];
   printf("Insira uma letra F ou M: \n");
   scanf("%s",&letra);

   char masculino [] = "M";
   char feminino [] = "F";

   int comparar1 = strcmp (letra,masculino);
   int comparar2 = strcmp (letra,feminino);

   if (comparar1 == 0)
   {
      printf("Masculino");
   } else if (comparar2 == 0)
   {
      printf("Feminino");
   } else
   {
      printf("Sexo inválido");
   }
   

   }