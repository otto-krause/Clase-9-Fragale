#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,n=0,n1=0,potencia=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&num);
  	printf("\nIngrese otro numero ");
  	scanf("%d",&num1);
	while (num1>i)
	{
	potencia=potencia*num;
	i=i+1;
	}
	printf("\nLa potencia es %d ",potencia);
}
