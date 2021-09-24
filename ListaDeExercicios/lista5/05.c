#include <stdio.h>


int main(void)
{

//achar número
   char linha[12];
   char caracter;
   printf("Insira a frase: ");

   gets(linha);
   int acharMes1 = 0;
   int acharMes2 = 0;
   char mesFinal[10];

   for (int i = 0; i < 1; i++) // 1 = dois mesFinal que representam o dia (0 e 1)
   {
      if (linha[i] != '/')
      {
         acharMes1 = linha[i+3] - '0'; //converter ascii para inteiro
         acharMes2 = linha[i+4] - '0'; 
      }
      
   }
   switch (acharMes2)
   {

      // 10 é tamanho da data xx/xx/xxxx
      //0,1 para imprimir o começo xx/
      //6 ao 9 para imprimir o fim /xxxx

      case 9:
      printf("%c%c do Nove de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 8:
      printf("%c%c do Oito de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 7:
      printf("%c%c do Sete de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 6:
      printf("%c%c do Seis de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 5:
      printf("%c%c do Cinco de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 4:
      printf("%c%c do Quatro de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 3:
      printf("%c%c do Três de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;

      case 2:
      if (acharMes1 != 2) //para nao imprimir duas vezes mes 12 e mes 2
      {
      printf("%c%c do Dois de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;
      }

      case 1:
      if (acharMes1 != 1) //para nao imprimir duas vezes mes 11 e mes 1
      {
      printf("%c%c do Um de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
      break;
      }

   }
   if (acharMes1 == 1 && acharMes2 == 2)
   {
      printf("%c%c do Doze de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
   }
   else if (acharMes1 == 1 && acharMes2 == 1)
   {
      printf("%c%c do Onze de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
   }
   else if (acharMes1 == 1 && acharMes2 == 0)
   {
      printf("%c%c do  Dez de %c%c%c%c\n",
      linha[0],linha[1],linha[6],linha[7],linha[8],linha[9]);
   }

}

