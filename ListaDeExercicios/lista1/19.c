//Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde



	#include <stdio.h>
   
   
   void main(){
   int metros;
   printf("Insira o número em metros: \n");
   scanf("%i",&metros);

   float calc = metros * 0.001;
   
   printf("São: %0.2f K/m \n",calc);
   }