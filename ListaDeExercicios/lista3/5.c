#include <stdio.h>

void main()
{
   int X, N;
   printf("Insira o valor de X e N: \n");
   scanf("%i %i", &X, &N);

   for (N; N != 1; N--)
   {
      int calc = X / N;
      X = calc;
      printf("Resultado: %i\n", calc);
      printf("Valor de N: %i\n", N);
   }
}

// a lógica parece certa, mas o resultado dando zero