#include <stdio.h>

void main()
{
   int salario;

   while (salario != 0){
   printf("Insira o salário: ");
   scanf(" %i", &salario);

   if (salario >= 0 && salario <= 2999)
   {
      int calc = (25 * salario) / 100;
      int soma_reajuste = (salario + calc) + salario;
      printf("Salário atual: %i \nDiferença para o anterior: %i \nSoma dos salários antigo e novo: %i\n", salario, calc, soma_reajuste);
   }
   else if (salario >= 3000 && salario <= 5999)
   {
      int calc = (20 * salario) / 100;
      int soma_reajuste = (salario + calc) + salario;
      printf("Salário atual: %i \nDiferença para o anterior: %i \nSoma dos salários antigo e novo: %i\n", salario, calc, soma_reajuste);
   }
   else if (salario >= 6000 && salario <= 9999)
   {
      int calc = (15 * salario) / 100;
      int soma_reajuste = (salario + calc) + salario;
      printf("Salário atual: %i \nDiferença para o anterior: %i \nSoma dos salários antigo e novo: %i\n", salario, calc, soma_reajuste);
   }
   else if (salario > 10000)
   {
      int calc = (10 * salario) / 100;
      int soma_reajuste = (salario + calc) + salario;
      printf("Salário atual: %i \nDiferença para o anterior: %i \nSoma dos salários antigo e novo: %i\n", salario, calc, soma_reajuste);
   }
   }
}
