
#include <stdio.h>


void main(){
int ms;// os dados que o usuário colocou vem parar aqui
printf("Insira o valor em m/s: \n"); //usuário vai colocar os dados aqui
scanf("%i",&ms); // para levar o que o usuário digitou para dentro da variávem ''ms''
float vkmh = ms*3.6; //para fazer o cálculo e colocar dentro da variável vkmh

printf("O resultado é: %0.2f km/h \n",vkmh); // para mostrar a variável vkmh para o usuário (ou seja o resultado do cálculo)
}
