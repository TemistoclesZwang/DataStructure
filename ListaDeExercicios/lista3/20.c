#include <stdio.h>

void main()
{
   aparelho_medicao();
}

int combutivel()
{
   int km_litro;
   printf("Com quantos litros seu carro faz 100 km?: \n");
   scanf("%i", &km_litro);

   return km_litro;
}

int aparelho_medicao()
{
   int km_litro = combutivel();
   int calc_km_litro = km_litro * 100;

   int distancia_percorrida = 0;
   int qtd_combustivel_usada = 0;

   int i;
   for (i = calc_km_litro; i <= 600; i += calc_km_litro)
   {
      qtd_combustivel_usada += km_litro;
      printf("Combustível usado até agora: %ilitros\n", qtd_combustivel_usada);
      printf("Km percorridos até agora: %iKm\n", i);
   }


   if (600 - calc_km_litro > 0)
   {
      printf("Falta %i KM para chegar ao destino\n",600 - calc_km_litro);
   }
   else
   {
      printf("Você chegou ao destino!");
   }
   

}





