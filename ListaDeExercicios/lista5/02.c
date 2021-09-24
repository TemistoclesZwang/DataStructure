   #include <stdio.h>
   #include <string.h>
   
   
   void main(){
   char frase[20];
   char *sub; //ponteiro
   printf("Digite a frase: \n");
   fgets(frase,20,stdin);
   
   sub = strtok(frase," "); // verifica a frase e o delimitador
   while (sub != NULL)
   {
      /* code */
      
      printf("%s\n",sub);
      sub = strtok (NULL, " ");
   }
   
   
   }