#include <stdio.h>
#include <string.h>



void gerarIniciais(char inputTotal[], int contCarac){
char iniciaisNome[10];
char contInicias = 1;

printf("%c",inputTotal[0]); //primeira inicial sempre está no indicie zero

for (int a = 0; a < contCarac; a++)
{
      if (inputTotal[a] == ' ')
      {
            iniciaisNome[contInicias] = inputTotal[a + 1]; //todas após um espaço
            
            printf("%c",iniciaisNome[contInicias]);
            contInicias++;
      }
}
printf("\n");
}

void main()
{
      char inputTotal[20];
      char caracters;
      int contCarac = 0;


      printf("Insira seu nome: ");

      while (caracters != '\n')
      {                            //utilizar aspa simples != aspas duplas
            caracters = getchar(); //getchar pega cada caracter
            inputTotal[contCarac] = caracters;
            contCarac++;
      }
gerarIniciais(inputTotal, contCarac);
}
