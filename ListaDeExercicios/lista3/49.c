	#include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   

   void main(){
   setlocale(LC_ALL, "Portuguese");
   int n;
   printf("Insira a quantidade de pessoas: \n");
   scanf("%i",&n);

   int soma_salarios = 0;
   int soma_filhos = 0;
   int pessoas_ate_mil = 0;

   float media_salarios = 0.0;
   float media_filhos;

   int i;

   for (i = 0; i <= n; i++)
   {
      
   // gerador de codigo,horas, e dependetes
   int id_cidadao = rand() % 1000000;
   float salario = rand() % 2990;
   int numero_filhos = rand() % 8;

   // somando os dados
   float soma_salarios = soma_salarios + salario;
   float soma_filhos = soma_filhos + numero_filhos;

   media_salarios = soma_salarios / n;
   media_filhos = soma_filhos / n;


   if (salario <= 1000)
   {
      pessoas_ate_mil += 1;
   }else
   {
      
      printf("Identidade do cidadão: %i\n",id_cidadao);
      printf("Salário: %0.2f\n",salario);
      printf("Número de filhos: %i\n",numero_filhos);
      printf("________________________________________________________________\n");

   }

   }
      //porcentagem
      float porcentagem = pessoas_ate_mil * n;
      printf("Média salarial: %0.2f\n",media_salarios);
      printf("Média filhos: %0.2f\n",media_filhos);
      printf("Porcentagem de pessoas que recebem até mil reais: %0.2f\n",porcentagem);
      printf("________________________________________________________________\n");
   }



