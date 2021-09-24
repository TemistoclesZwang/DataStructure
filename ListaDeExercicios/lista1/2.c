// 2.Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real(R$)

#include <stdio.h>

main()
{
   float cotacao_dolar = 5.34;
   float valor_em_dolar;

   printf("Digite o valor em dólar: ");
   scanf("%f", &valor_em_dolar);

   float calculo = valor_em_dolar * cotacao_dolar;
   printf("O valor em reais é: %0.2f\n", calculo);

}