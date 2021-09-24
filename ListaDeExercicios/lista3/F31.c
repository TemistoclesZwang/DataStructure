//Leia  um  número decimal  (até  3  dígitos)  
// e  escreva  o  seu  equivalente  em  numeração  romana. 
// Utilize funções  para obter cada  dígito  do  número  decimal  
// e para a transformação  de  numeração  decimal para romana 
// (Dica: 1 = I, 5 = V, 10 = X, 50 = L, 100 = C, 500 = D, 1.000 = M).


   #include <stdio.h>
   
   
   void main()
   {
      conversoes();
   }


   int entrada_dados(){
   int numero_entrada;
   printf("Insira o número desejado: ");
   scanf("%i", &numero_entrada);
   
   return numero_entrada;
   }


   int conversoes(){

   int entrada = entrada_dados();

   int unidade = entrada % 10;

   int calc_dezena = (entrada - unidade) / 10;
   int dezena = calc_dezena % 10;

   int centena = (calc_dezena - dezena) / 10;


   }

   int romanos(){


   char primeiro [ ] = "I";
   char segundo [ ] = "II";
   char terceiro [ ] = "III";
   char quarto [ ] = "IV";
   char quinto [ ] = "V";
   char sexto [ ] = "VI";
   char setimo [ ] = "VII";
   char oitavo [ ] = "VIII";
   char nono [ ] = "IX";

   // int unidade = conversoes();
   int teste = (unidade == 1)?primeiro:0;
   int teste = (unidade == 2)?segundo:0;
   int teste = (unidade == 3)?terceiro:0;
   int teste = (unidade == 4)?quarto:0;
   int teste = (unidade == 5)?quinto:0;
   int teste = (unidade == 6)?sexto:0;
   int teste = (unidade == 7)?setimo:0;
   int teste = (unidade == 8)?oitavo:0;
   int teste = (unidade == 9)?nono:0;

   
}








   // if (unidade && dezena && centena != 0)
   // {
   // printf("Invertido: %i%i%i\n", unidade, dezena, centena);
   // } else if (unidade && dezena != 0)
   // {
   // printf("Invertido: %i%i\n", unidade, dezena);
   // }
   // }