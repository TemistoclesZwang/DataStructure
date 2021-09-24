#include <stdio.h>

main()
{
   int n1;
   int n2;
   int n3;

   int p1 = 5;
   int p2 = 3;
   int p3 = 2;

   printf("Insira a nota 1: ");
   scanf("%i", &n1);
   printf("Insira a nota 2: ");
   scanf("%i", &n2);
   printf("Insira a nota 3: ");
   scanf("%i", &n3);

   int media = (p1*n1 + p2*n2 + p3*n3) / (p1+p2+p3);
   printf("Média %i\n", media);
   
}