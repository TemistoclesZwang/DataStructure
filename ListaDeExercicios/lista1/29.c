	#include <stdio.h>

   
   
   void main(){

   int saque;
   printf("Quanto você quer sacar? \n");
   scanf("%i",&saque);

   int resto100 = saque % 100;
   int cem = saque / 100;

   int resto50 = resto100 % 50;
   int cinquenta = resto100 / 50;

   int resto20 = resto50 % 20;
   int vinte = resto50 / 20;

   int resto10 = resto20 % 10;
   int dez = resto20 / 10;

   int resto5 = resto10 % 5;
   int cinco = resto10 / 5;

   int dois = resto5 / 2;
   
   printf("Notas de 100:%i\nNotas de 50:%i\nNotas de 20:%i\nNotas de 10:%i\nNotas de 5:%i\nNotas de 2:%i\n",cem,cinquenta,vinte,dez,cinco,dois);
   }