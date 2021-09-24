   #include <stdio.h>
   #include <string.h>
   
   
   void main(){
   char ano[11];
   printf("Insira o ano: \n");
   gets(ano);

   int tamanho = strlen(ano);
   int ultimoAlg = ano[tamanho-1] - '0'; //converter tabela ascii para inteiro
   // retirando último algarismo do número
   switch (ultimoAlg)
   {
   case 0:
   printf("é bisexto\n");
   break;

   case 2:
   printf("é bisexto\n");
   break;   

   case 4:
   printf("é bisexto\n");
   break;   

   case 6:
   printf("é bisexto\n");
   break;   

   case 8:
   printf("é bisexto\n");
   break;

   default:
   printf("Não é bisexto\n");
   break;

   }
   }
   