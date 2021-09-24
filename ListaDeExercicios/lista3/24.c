#include <stdio.h>

void main()
{
      int A, limite, R;
      printf("Insira o valor inicial, valor limite  a razão: \n");
      scanf("%i%i%i", &A, &limite, &R);

      int controle = 0;
      int i;

      for (i = A; i <= limite + 1; i++)
      {

            controle += R;
            printf("%i\n", controle);
      }
}