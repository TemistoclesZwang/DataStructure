//Leia  a hora  do  início  de  um  jogo  e  a  hora  de  fim  do  jogo  (cada hora  é  composta  por  2  variáveis  inteiras: hora  e minuto).
//Calcule e  escreva a duração do  jogo (horas e minutos),
//sabendo-se que  o tempo máximo de duração do jogo é de 24 horas e que ele pode iniciar-se em um dia e terminar no dia seguinte

#include <stdio.h>

void main()
{

   printf("NÃO INSIRA '0' ANTES DAS HORAS EXEMPLO 08:00 DEVE SER ESCRITO APENAS 8\n");
   int hora_inicio, min_inicio, hora_fim, min_fim;
   printf("Insira a hora de inicio do jogo (ESPAÇO) e os minutos: ");
   scanf("%i%i", &hora_inicio, &min_inicio);

   printf("Insira a hora de fim do jogo (ESPAÇO) e os minutos: ");
   scanf("%i%i", &hora_fim, &min_fim);

   int calc_hora = 24 - (hora_inicio - hora_fim);
   int calc_minutos = ((calc_hora * 60) + min_fim) % calc_hora;

   printf("Durou %ih e %imin\n", calc_hora, calc_minutos);
}