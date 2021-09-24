//Leia  o  preço  de  três  produtos  e  informe  qual  produto  deve  ser  comprado,  sabendo  que  a  decisão  é  sempre  pelo mais barato.

	#include <stdio.h>
   
   
   void main(){
   float p1,p2,p3;
   printf("Insira o preço do produto1, produto2 e produto3: \n");
   scanf("%i %i %i",&p1,&p2,&p3);
   
   int compara1 = (p1 < p2 && p1 < p3)?p1:0;
   int compara2 = (p2 < p3 && p2 < p1)?p2:0;
   int compara3 = (p3 < p2 && p3 < p1)?p3:0;

   if (compara1 != 0)
   {
      
      printf("Reslultado: produto1 é o mais barato \n");
   }
   else if (compara2 != 0)
   {
      printf("Reslultado: produto2 é o mais barato \n");

   }
   else{
      printf("Reslultado: produto3 é o mais barato \n");
   }
   }