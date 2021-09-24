#include <stdio.h>

void main()
{
   int entrada;

   while (entrada != 0){
   printf("Quantos números quer verificar?: \n");
   scanf("%i", &entrada);

   int i;
   int j;
   int numero_entrada;

   for (i = 1; i <= entrada; i++) //for para receber os números
   {
      printf("\nInsira o item %i: \n", i); 
      scanf("%i", &numero_entrada);

      for (j = 1; j <= 100; j++) //for para enconrar os divisores
      {
         if (numero_entrada % j == 0)// x é divisor de y se x % == 0
         {
            printf("%i é divisor de %i\n", j, numero_entrada);
         }
      }
            printf("___________________________________________");
   }
   }
}
