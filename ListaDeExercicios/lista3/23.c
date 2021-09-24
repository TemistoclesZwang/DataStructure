   #include <stdio.h>
   #include <math.h>
   
   
   void main(){
   int A0,limite,R;
   printf("Insira o valor inicial, valor limite e razão: \n");
   scanf("%i%i%i",&A0,&limite,&R);

   int i;

   for (i = A0; i < limite; i++)
   {
      int calc = A0 * R;
      int calc2 = pow (calc,(i-1));
      printf("%i\n",calc2);
   }
   
   
   }