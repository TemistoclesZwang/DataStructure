   #include <stdio.h>
   #include <string.h>
   
   
   void main(){
   char txt[200];
   int *substring; //ponteiro
   int contador = 0;

   printf("Insira seu texto: \n");
   gets(txt);
   
   substring = strtok (txt," ");
   while(substring != NULL){
      
      // printf("%s\n",substring);
      contador++;
      
      substring = strtok (NULL, " ");
   }
   printf("Número de palavras: %i\n",contador);
   }