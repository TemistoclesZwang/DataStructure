#include <stdio.h>

main()
{
   float salario;
   printf("Insira o salário: ");
   scanf("%f",&salario);

   float porcentagem = (salario / 100) * 25;
   float final = porcentagem + salario;

   printf("O novo salário é %0.2f\n",final);


}