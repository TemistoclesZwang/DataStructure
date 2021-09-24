// //. Leia 2 vetoresA e B com N elementos,
//  escreva um vetorC, sendo este a junção das vetorsA e B.
//  Desta forma, a vetorC deverá ter 2*N elementos


   #include <stdio.h>
   
   
   void main(){
   //para gerar um vetor do mesmo tamanho do input do usuário
   int quantidade;
   printf("\nInsira quantas elementos quer:");
   scanf("%i",&quantidade);
   
   int vetorA[quantidade];
   int vetorB[quantidade];
   int vetorC[quantidade * 2];

   // para colocar cada item que o usuário digitar dentro do array
   int i;
   for (i = 0; i < quantidade; i++)
   {
      
      printf("Insira o valor %i do vetor A : \n",i);
      scanf("%i",&vetorC[i]);
      
   }
   int j;
   for (j = quantidade; j < quantidade * quantidade; j++)
   {
      
      printf("Insira o valor %i do vetor B : \n",j);
      scanf("%i",&vetorC[j]);
      
   }
   int l;
   for (l = 0; l < quantidade * quantidade ; l++)
   {
   printf("Itens do vetor C: %i\n",vetorC[l]);
   }
   
   }