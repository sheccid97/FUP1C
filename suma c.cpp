#include<stdio.h>//libreria e/s
int n1;
int n2;
int resultado;
int main()
{//Inicio
   printf("dame un numero:");
   scanf("%d",&n1);
   printf("dame un numero:");
   scanf("%d",&n2);
   resultado=n1+n2;
   printf("el resultado %d + %d es: %d\n",n1,n2,resultado);
   printf("dame un numero:");
   scanf("%d",&n1);
    printf("dame un numero:");
   scanf("%d",&n2);
   resultado=n1-n2;
   printf("el resultado %d - %d es: %d\n",n1,n2,resultado);
   printf("dame un numero:");
   scanf("%d",&n1);
   printf("dame un numero:");
   scanf("%d",&n2);
   resultado=n1*n2;
   printf("el resultado %d * %d es: %d\n",n1,n2,resultado);
   printf("dame un numero:");
   scanf("%f",&n1);
   printf("dame un numero:");
   scanf("%f",&n2);
   resultado=n1/n2;
   printf("el resultado %f / %f es: %.3f\n",n1,n2,resultado);
}//Fin
