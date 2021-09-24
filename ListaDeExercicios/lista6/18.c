   #include <stdio.h>
   
   

   int qtd_atual = 2;
   int anterior = 0;
   int acumulador = 1;
   int i;

   int fibo(int N){
   int vetor[N];
   for (i = 0; i < N; i++)
   {
      int novo_atual = anterior + acumulador;
      anterior = acumulador;
      acumulador = novo_atual;
      vetor[i] = acumulador;
      // printf("%i\n",vetor[i]);
      qtd_atual += 1;
      return vetor[i];
   }
   }

   void main(){
   int n;
   printf("Insira o número: ");
   scanf("%i",&n);
   for (int i = 0; i < n; i++)
   {
      printf("%i\n",fibo(n));
   }
   }