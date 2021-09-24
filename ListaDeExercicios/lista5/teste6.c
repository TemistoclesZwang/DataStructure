#include <stdio.h>

char linha[50];
char caracter;
char somenteLetras [10];
char somenteNum [10];

int i = 0;
int algarismo;
int contadorLetras = 0;


int teste(){
   printf("Insira a frase: ");

   while(caracter != "\n") { //utilizar aspa simples
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
   return 0;
}


char escreverN(){

   // os números sempre vão ficar 
   //na posição contadorLetras-1 (inicio)
   // e i-2 (fim)
   for (int i = contadorLetras-1; i <= i-2; i++)
   {
   switch ( somenteNum[i] )
   {

      case 57:
      printf("nove");
      break;

      case 56:
      printf("oito");
      break;

      case 55:
      printf("sete");
      break;

      case 54:
      printf("seis");
      break;

      case 53:
      printf("cinco");
      break;

      case 52:
      printf("quatro");
      break;

      case 51:
      printf("três");
      break;

      case 50:
      printf("dois");
      break;

      case 49:
      printf("um");
      break;

      case 48:
      printf("zero");
      break;
   }
   }
   
}


char escreverL()
{
   for (int i = 0; i <= i-2; i++)
   {
      
      printf("%c\n",somenteLetras[i]);
   }
   
}


void main(){
   teste();
   escreverN();
   escreverL();
}