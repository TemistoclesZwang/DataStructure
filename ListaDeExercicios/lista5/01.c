#include <stdio.h>

void main()
{
   char frase[20];

   printf("Digite a frase: \n");
   fgets(frase, 20, stdin); //fgets pega cada caracter digitado(stdin) e coloca no array frase
   int tamanho = strlen(frase);
   // inverter(frase,tamanho);

   for (int i = tamanho; i >= 0; i--)
   {
      if (frase[i] != '\n' && frase[i] != '\0')
      {
         
      switch ( frase[i] )
      {

      case 'a':
      frase[i] = '#'; 
      break;
      
      case 'e':
      frase[i] = '#'; 
      break;
      
      case 'i':
      frase[i] = '#'; 
      break;
      
      case 'o':
      frase[i] = '#'; 
      break;
      
      case 'u':
      frase[i] = '#'; 
      break;
      
      }
      printf("Letra: %c\n", frase[i]);
      

   }
}

void inverter(char frase[], int tamanho)
{
   int i;

   for (i = 0; frase[i] != '\n'; i++) //somente aspas simples funcionam
   {
      // printf("Teste: %c \n", frase[i]);
   }
   for (int j = tamanho; j >= 0; j--)
   {
      printf("%c \n", frase[j]);
   }
}
}
