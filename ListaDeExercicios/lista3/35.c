   #include <stdio.h>
   #include <math.h>
   
   
   void main(){
   int A0,limite,R;
   printf("Valor inicial, valor limite e razão: \n");
   scanf("%i%i%i",&A0,&limite,&R);

   int i;

   for (i = A0; i < limite; i++)
   {
      int p1 = A0 * R;
      int p2 = pow (p1,(i-1));
      printf("Resultado: %i\n",p2);
   }
   
   
   }