#include <stdio.h>

void main()
{
      int A0, limite, R;
      printf("valor inicial, valor limite  a razão: \n");
      scanf("%i%i%i", &A0, &limite, &R);

      int controle = 0;
      int i;

      for (i = A0; i <= limite + 1; i++)
      {
            controle += R;
            printf("Resultado: %i\n", controle);
      }
}