//Leia  um  número  e  exiba  o  dia  correspondente  da  semana.  (1-Domingo,  2-Segunda  etc.),  se  digitar  outro  valor deve aparecer valor inválido.w


	#include <stdio.h>
   
   
   void main(){
   int semana;
   printf("Insira o dia 1 segunda, 2 terça, 3 quarta, 4 quinta, 5 sexta, 6 domingo, 7 sábado \n");
   scanf("%i",&semana);
   
   switch (semana)
   {
   case 1:
      printf("Segunda \n");
      break;
   
   case 2:
   {
      printf("Terça \n");
      break;
   }
      case 3:
   {
      printf("Quarta \n");
      break;
   }
      case 4:
   {
      printf("Quinta \n");
      break;
   }
      case 5:
   {
      printf("Sexta \n");
      break;
   }
      case 6:
   {
      printf("Sábado \n");
      break;
   }
      case 7:
   {
      printf("Domingo \n");
      break;
   }
   }
   
   }