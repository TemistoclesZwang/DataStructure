   #include <stdio.h>
   
   
   void main(){
   char verbo[20];
   printf("Insira o verbo: \n");
   gets(verbo);
   int tamanho = strlen (verbo);

   verbo[tamanho-1] = ' ';
   verbo[tamanho-2]= 'o';
   
   printf("Teste: %s\n",verbo);   
   
   }