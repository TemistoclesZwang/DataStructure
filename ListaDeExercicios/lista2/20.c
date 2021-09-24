//Leia as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule asua média. A atribuição de conceitos obedece à tabela abaixo:

//Entre 9.0 e 10.0A
// Entre 7.5 e 9.0B
// Entre 6.0 e 7.5C
// Entre 4.0 e 6.0D
// Entre 4.0 e zeroE

// O programadeve    mostrar    na    tela    as    notas,    a    média,    o    conceito    correspondente    e    amensagem“APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E

#include <stdio.h>

void main()
{
   float n1, n2;
   printf("Insira a nota 1 e nota 2: \n");
   scanf("%f %f", &n1, &n2);

   float media = (n1 + n2) / 2;

   if (media >= 9.0 && media <= 10) 
   {
      printf("Sua nota é: A\n");

   }else if (media >= 7.5 && media <= 9.0)
   {
      printf("Sua nota é: B\n");
      
   }else if (media >= 6.0 && media <= 7.5)
   {
      printf("Sua nota é: C\n");
      
   }else if (media >= 4.0 && media <= 6.0)
   {
      printf("Sua nota é: D\n");
      
   }else if (media >= 4.0 && media <= 0.0)
   {
      printf("Sua nota é: E\n");
      
   }
   

}