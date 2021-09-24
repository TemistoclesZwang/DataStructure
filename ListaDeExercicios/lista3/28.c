   #include <stdio.h>
   #include <time.h>
   
   
   void main(){

   srand(time(NULL));
   int marcador = 0;
   int tentativas = 0;
   int aleatorio = 1 + (rand() % 99);

   while (marcador == 0)
   {
   int N = 0;
   printf("Insira um número: \n");
   scanf("%i",&N);

   if (N > aleatorio)
   {
      printf("Insira um número menor\n");
      tentativas++;
   } else if (N < aleatorio)
   {
      printf("Insira um número maior\n");
      tentativas++;
   } else
   {
      marcador = 1;
      printf("Parabéns você acertou\n");
   }

   }

   
}