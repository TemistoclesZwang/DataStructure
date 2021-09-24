#include <stdio.h>

void escreverN(char numero[],int comeco,int fim){

   // os números sempre vão ficar 
   //na posição contadorLetras-1 (inicio)
   // e i-2 (fim)
   for (int i = comeco; i <= fim; i++)
   {
   switch ( numero[i] )
   {

      case 57:
      printf("nove ");
      break;

      case 56:
      printf("oito ");
      break;

      case 55:
      printf("sete ");
      break;

      case 54:
      printf("seis ");
      break;

      case 53:
      printf("cinco ");
      break;

      case 52:
      printf("quatro ");
      break;

      case 51:
      printf("três ");
      break;

      case 50:
      printf("dois ");
      break;

      case 49:
      printf("um ");
      break;

      case 48:
      printf("zero");
      break;
   }
   }
   printf("\n");
}

void escreverL(char letras[],int fim)
{
   for (int i = 0; i <= fim; i++)
   {
      printf("%c",letras[i]);
   }
}


int main(void)
{

//achar número
   char linha[50];
   char caracter;
   char somenteLetras [20];
   char somenteNum [20];

   int i = 0;
   int algarismo;
   int contadorLetras = 0;

   printf("Insira a frase: ");

   while(caracter != '\n') { //utilizar aspa simples
      caracter = getchar(); //getchar pega cada caracter
      linha[i] = caracter;
   
   if (caracter >= 48 && caracter <= 57){ // são os códigos em ascii de 0 a 9
      somenteNum[i] = caracter;
   }
   else
   {
      somenteLetras[i] = caracter;
      contadorLetras++;
   }
   ++i;
   }
   escreverL(somenteLetras,i-2);
   escreverN(somenteNum,contadorLetras-1,i-2);
}

