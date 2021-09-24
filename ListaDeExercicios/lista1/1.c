#include <stdio.h>

main(){
   int entrada_velocidade;
   printf ("Insira o a velocidade média: ");
   scanf("%i",&entrada_velocidade);

   int saida_total = entrada_velocidade * 3.6;
   printf("O resultado é: %i\n", saida_total);

}