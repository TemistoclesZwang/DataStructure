#include <stdio.h>

int main()
{
   int valores_containers = containers();
   int valores_passageiros = passageiros();

   //AERONAVE
   int combustivel;
   printf("Insira a quantidade de combustível (listros/int): \n");
   scanf("%i", &combustivel);

   int peso_combustivel = combustivel * 1.5;

   float peso_decolagem = valores_containers + valores_passageiros + peso_combustivel;

   printf("Peso da decolagem: %0.2f\n", peso_decolagem);

   if (peso_combustivel < 10000)
   {
      printf("Devido a falta de combustível não é possível a decolagem\n");
   }
   else if (peso_decolagem > 500.00)
   {
      printf("Devido ao excesso de peso não é possível a decolagem\n");
   }
   else if (peso_decolagem > 500.00)
   {
      printf("Tudo certo, iniciando decolagem !\n");
   }
}


int containers()
{

   //para cada container gerar um input para pegar os pesos
   int containers;
   printf("Insira o número de containers: \n");
   scanf("%i", &containers);

   int i;
   float peso_containersA; //peso antigo
   float peso_containersN; //peso novo, soma

   for (i = 0; i < containers; i++)
   {
      printf("Insira o peso do container %i (Kg): \n",i);
      scanf("%f", &peso_containersA);
      peso_containersN += peso_containersA;
   }

   printf("Peso total dos containers %0.2f: \n", peso_containersN);
   printf("\n-----------------\n");

   return peso_containersN;
}

int passageiros()
{
   //passageiros
   int passageiros;
   printf("Insira o número de passageiros: \n");
   scanf("%i", &passageiros);

   int i;
   int n_bilhete;
   float peso_bagagensA;
   float peso_bagagensN;

   for (i = 0; i < passageiros; i++)
   {
      printf("Insira o número do bilhete do passageiro %i: \n", i);
      scanf("%i", &n_bilhete);

      printf("Qual a quantidade de bagagens do passageiro %i? (KG) \n", i);
      scanf("%f", &peso_bagagensA);
      peso_bagagensN += peso_bagagensA;
   }
   float peso_passageiros = 70 * passageiros;
   float peso_passageiro_bagagens = peso_passageiros + peso_bagagensN;

   printf("Dados cadastrados:\nquantidade de passageiros %i\npeso total dos passageiros %0.2f\npeso total de bagagens %0.2f\npeso dos passageiros e suas bagagens: %0.2f\n", passageiros, peso_passageiros, peso_bagagensN, peso_passageiro_bagagens);
   printf("\n-----------------\n");

   return peso_passageiro_bagagens;
}


