#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*  
Escreva um programa que tenha uma função que verifica se 
um número inteiro, passado como parâmetro, e exiba na 
tela se o número é par ou impar.
*/

int ehParImpar (int x) {
   
   int r = x % 2;
   
return r;

}

main () {

   int i, numero;
   
   printf("Numero : ");
   scanf("%i", &numero);
   i = ehParImpar (numero);
   if (i == 0) {
      printf ("O numero eh PAR !\n");
   }
   else {
         printf ("O numero eh IMPAR !\n");    
   }
   printf("\n\n");
   system ("pause");
   
}