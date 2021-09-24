//Leia 3 (três) números e escreva-os em ordem crescente.


	#include <stdio.h>
   
   
   void main(){
   int n1, n2, n3;
   printf("Escreva o número 1, número 2 e número 3: \n");
   scanf("%d %d %d", &n1, &n2, &n3);

   if (n1 > n3) {
      int substituir = n3;
      n3 = n1;
      n1 = substituir;
   }
   if (n1 > n2) {
      int substituir = n2;
      n2 = n1;
      n1 = substituir;
   }
   if (n2 > n3) {
      int substituir = n3;
      n3 = n2;
      n2 = substituir;
   }
   printf("\n%i %i %i\n", n1, n2, n3);
}

   // 1 2 3