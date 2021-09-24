   #include <stdio.h>
   #include <string.h>

#include <stdio.h>

int main() {
   char inputTotal[20];
   char charTemp;
   int contCarac = 0;

   printf("Insira sua palavra: ");

   while (charTemp != '\n'){
   charTemp = getchar(); //getchar pega cada caracter
   putchar('*');
   inputTotal[contCarac] = charTemp;
   }

   return 0;
}   
   