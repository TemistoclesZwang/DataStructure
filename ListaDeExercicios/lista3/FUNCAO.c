#include <stdio.h>

int main()
{
   int A;
   printf("Insira o valor de A:\n");
   scanf("%i",&A);

   float B = passageiros();
   int C = aeronave();

   float calc = B + C;

   printf("%0.2f",calc);
}


int passageiros()
{
float B;
printf("Insira o valor de B:\n");
scanf("%f",&B);
return B;


}

int aeronave()
{
int C;
printf("Insira o valor de C:\n");
scanf("%i",&C);

return C;

}

