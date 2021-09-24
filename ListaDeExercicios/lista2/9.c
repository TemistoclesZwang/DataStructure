//Leia a altura (em metros) e peso (em Kg) de uma pessoa, 
//em seguida calcule o índice de massa corpórea (IMC = peso / altura2). 
//Ao final, escreva se a pessoa está com peso normal (IMC abaixo de 25), 
//obeso (IMC entre 25 e 30) ou obesidade mórbida (IMC acima de 30)

	#include <stdio.h>
	#include <math.h>
   
   
   void main(){
   float altura,kg;
   printf("Insira sua altura e seu peso: \n");
   scanf("%f%f",&altura, &kg);
   
   float imc = kg / (pow(altura,2));
   printf("Seu imc é: %f \n",imc);

   float imc_normal = (imc < 25)?1:0;
   float imc_obeso = (imc >= 25 || imc <= 30)?1:0;
   float imc_morbido = (imc > 30)?1:0;


   if (imc_normal == 1)
   {
      printf("Status de seu IMC: normal\n");
   }else if (imc_obeso == 1)
   {
      printf("Status de seu IMC: obeso\n");
   }else if (imc_morbido == 1)
   {
      printf("Status de seu IMC: obeso\n");

   }

   }
