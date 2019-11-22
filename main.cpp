#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("ingresa el primer numero: ");
scanf("%d",&a);
printf("ingresa el segundo valor: ");
scanf("%d",&b);
if (a<b)
printf(" primer valor es menor que segundo valor ");
else if (a>b) 
printf (" primer valor es mayor que segundo valor");
else
printf("los dos valores son iguales");
getch();
}

