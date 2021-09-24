//Leia duas notas de um aluno e escreva na tela a palavra “Aprovado” se a média das duas notas for maior ou igual a 7,0. 
//Caso a média seja inferior a 7,0, o programa deve ler a nota do examefinal e calculara média final. 
//Se esta média for maior ou igual a 6,0, o programa deve escrever“Aprovado”, caso contrário deve escrever“Reprovado”.

	#include <stdio.h>
   
   
   void main(){
   float n1,n2;
   printf("Insira a nota 1 e a nota 2: \n");
   scanf("%f%f",&n1,&n2);

   float media_notas = (n1 + n2) / 2;

   float validar_media = (media_notas < 7)?1:0;

   if (validar_media == 1)
   {
   float exame_f;
   printf("Insira a nota do exame final: \n");
   scanf("%f",&exame_f);
   float media_notas = (n1 + n2 + exame_f) / 3;

   float nota_final = (media_notas >= 6)?1:0;
   if (nota_final == 1)
   {
   printf("Aprovado");
   }
   else
   {
   printf("Reprovado");
      
   }
   
   }
   else
   {
   printf("Aprovado");
   
   }
   
   
   }