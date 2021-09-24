#include <stdio.h>
#include <stdlib.h>

void main()
{

   int codigo = 0;
   int horas_trabalhadas = 0;
   int dependentes = 0;

   int funcionarios = 5;
   float por_hora = 12.00;
   float por_dependente = 40.00;
   float inss = 8.5;
   int ir = 5;


   int i;
   for (i = 1; i < funcionarios; i++){
      int random_codigo = rand() % 100000;
      int random_horas_trabalhadas = rand() % 300;
      int random_dependentes = rand() % 5;
   printf("Informações do funcionário: \n");
      printf("\nFuncionário %i\nCódigo:%i\nhoras trabalhadas: %i\ndependentes: %i\n", i,random_codigo,random_horas_trabalhadas,random_dependentes);

      printf("\nValores do funcionário: \n");
      float horas_trabalhadas = random_horas_trabalhadas * por_hora;
      float dependentes = random_dependentes * por_dependente;
      float salario_bruto = horas_trabalhadas + dependentes;
      float desconto_inss_ir = (ir + inss * salario_bruto) / 100;
      float salario_liquido = salario_bruto - (desconto_inss_ir);
      printf("Funcionário: %i\nCódigo: %i\nHoras trabalhas: %0.2f\nDependente: %0.2f\nSalario Bruto: %0.2f\nDesconto INSS: %0.2f\nSalario liquido: %0.2f\n",i,random_codigo,horas_trabalhadas,dependentes,salario_bruto,desconto_inss_ir,salario_liquido);
      printf("_______________________ \n");


   }
}

