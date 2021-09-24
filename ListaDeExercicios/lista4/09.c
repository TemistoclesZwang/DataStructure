// Gere um vetorcomos N primeiros termos da seqüência de Fibonacci (0,1,1,2,3,5,8,13,21,...

   #include <stdio.h>
   
   
   void main(){
   int N;
   printf("\n Insira o valor de N:");
   scanf("%i",&N);
   
   int qtd_atual = 2;
   int anterior = 0;
   int acumulador = 1;
   int vetor[N];
   int i;

   for (i = 0; i < N; i++)
   {
      int novo_atual = anterior + acumulador;
      anterior = acumulador;
      acumulador = novo_atual;
      vetor[i] = acumulador;
      printf("%i\n",vetor[i]);
      qtd_atual += 1;
   }
   
   }
   