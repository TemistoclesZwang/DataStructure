#include <stdio.h>
#include <string.h>

void main()
{
char inputTotal[20];
char caracters;

char primeiroNome[10];
char segundoNome[10];

char guardarEspacos[5];
int contGEspa = -1;

int contCarac = 0;
int contador2 = 0;


printf("Insira seu nome: ");

   while(caracters != '\n') { //utilizar aspa simples
      caracters = getchar(); //getchar pega cada caracter
      inputTotal[contCarac] = caracters;
      contCarac++;

      if (caracters == ' ')// se o char for um espaço vai ser guardada a posição dele
      {
         contGEspa++;
         guardarEspacos[contGEspa] = contCarac; 
      }
      
   }

// inicio vai ser o espaço com maior número que estiver na var guardarEspacos
// o fim vai ser a quantidade de caracteres digitado
for (int inicio = guardarEspacos[contGEspa]; inicio < contCarac; inicio++)
{
   printf("%c",inputTotal[inicio]);
}

for (int q = 0; q < guardarEspacos[0]; q++)
{// guardarEspacos[0] vai até o primeiro espaço, 
// para ir até o fim do nome utilizar contGEspa no lugar do zero
   printf("%c",inputTotal[q]);
   
}
printf("\n");



}



