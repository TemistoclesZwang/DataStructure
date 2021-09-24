#include <stdio.h>

void main()
{
   float juros = 0.85;
   float falta_pagar = 3.000;
   float valor_diario = 200.00;

   int i;
   float prox_parcela;

   for (i = 1; i < 16; i++)
   {
      float calc = falta_pagar - (valor_diario + juros);
      prox_parcela -= calc;

      printf("Dia: %i parcela: %0.2f\n", i, prox_parcela);
   }
}
