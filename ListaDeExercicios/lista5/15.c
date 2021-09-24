//Leia  uma  frase  e  faça  a  criptografia,  retirando  as  vogais  das  palavras.  O  programa  deverá  armazenar estas  vogais  e  suas  posições  originais,  mostrar  a  frase  criptografada,  em  seguida,  descriptografar  a frase e mostrá-la na tela.

   #include <stdio.h>
   
   
   void main(){
   char inputTotal[20];
   char charTemp;
   int contCarac = 0;

   char vogais[20];
   int contadorVogais = 0; //para saber começo e fim
   char posicoesVogais[10];

   printf("Insira sua palavra: ");

   while (charTemp != '\n'){
   charTemp = getchar(); //getchar pega cada caracter
   inputTotal[contCarac] = charTemp;

   switch (charTemp)
   {
   case 97:
      contadorVogais++;
      vogais[contCarac] = 'a';
      // posicoesVogais[contadorVogais] = posicoesInpTotal;
      
      break;
   case 101:
      contadorVogais++;
      vogais[contCarac] = 'e';
      // posicoesVogais[contadorVogais] = posicoesInpTotal;
      
      break;
   case 105:
      contadorVogais++;
      vogais[contCarac] = 'i';
      // posicoesVogais[contadorVogais] = posicoesInpTotal;
      
      break;
   case 111:
      contadorVogais++;
      vogais[contCarac] = 'o';
      // posicoesVogais[contadorVogais] = posicoesInpTotal;
      
      break;
   case 117:
      contadorVogais++;
      vogais[contCarac] = 'u';
      // posicoesVogais[contadorVogais] = posicoesInpTotal;

      break;
   }
   contCarac++;
   }

   // saída criptografada
   printf("Criptografia ativada: ");

for (int x = 0; x < contCarac - 1; x++) // -1 para não pegar o \n no fim
{
   if (vogais[x] != inputTotal[x])
   {
   printf("%c",inputTotal[x]);
   
   }
   
}
   printf("\n");

// descriptografando
   printf("Descriptografando: ");

for (int y = 0; y < contCarac; y++)
{
   printf("%c",inputTotal[y]);
}
   printf("\n");


}
