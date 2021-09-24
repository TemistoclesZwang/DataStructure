   #include <stdio.h>
   #include <time.h>
   
   
   void main(){
   srand(time(NULL));

   //idade
   int acumulador_idade_m = 0;
   int acumulador_idade_h = 0;
   //sexo
   int acumulador_feminino = 0;
   int acumulador_masculino = 0;
   //estado civil
   int acumulador_casado = 0;
   int acumulador_solteiro = 0;
   int acumulador_divorciado = 0;
   int acumulador_viuvo = 0;


   int i;
   for (i = 1; i < 100; i++)
   {
      if (1 + (rand() % 1) == 1)
      {
         acumulador_masculino++;
         acumulador_idade_h += 1 + (rand() % 54);
      
      } else
      {
         acumulador_feminino++;
         acumulador_idade_m += 1 + (rand() % 54);

      }
      
   }
      int calc_media_h = acumulador_idade_h / acumulador_masculino;
      printf("Media idade homens: %i\n",calc_media_h);
      int calc_media_m = acumulador_idade_m / acumulador_feminino;
      printf("Media idade mulheres: %i\n",calc_media_m);
   }
   