#include<stdio.h>//libreria e/s
int n1;
int n2;
float resultado;
int main()
{//Inicio
   printf("dame un numero:");
   scanf("%d",&n1);
   printf("dame un numero:");
   scanf("%d",&n2);
   resultado=n1+n2;
   printf("el resultado %d + %d es: %f\n",n1,n2,resultado);
   resultado=n1-n2;
   printf("el resultado %d - %d es: %f\n",n1,n2,resultado);
   resultado=n1*n2;
   printf("el resultado %d * %d es: %f\n",n1,n2,resultado);
   resultado=(float)n1/n2;
   printf("el resultado  %d / %d es: %.1f\n",n1,n2,resultado);
}//Fin
