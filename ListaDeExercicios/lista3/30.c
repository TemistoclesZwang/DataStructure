#include <stdio.h>

void main()
{
   int quantidade;
   float preco;
   char nome_produto[10];
   char produto_fim[ ] = "FIM";

   while (strcmp(nome_produto, "FIM") != 0)
   {
   
   printf("Insira a quantidade, o preço e o nome: \n");
   scanf("%i %f %s", &quantidade, &preco, &nome_produto);

   if (quantidade <= 10)
   {
      printf("Valor a ser pago pelo %s: %i\n",nome_produto, preco * quantidade);
   }
   else if (quantidade > 10 && quantidade <= 20)
   {
      int total = preco * quantidade;
      printf("Valor a ser pago pelo %s: %i\n",nome_produto, (10 * total) / 100);
   }
   else if (quantidade > 20 && quantidade <= 50)
   {
      int total = preco * quantidade;
      printf("Valor a ser pago pelo %s: %i\n",nome_produto, (50 * total) / 100);
   }


   }


}