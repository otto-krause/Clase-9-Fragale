#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,nmg=0,acu=0,n=0;
	float vprom=0;
	while (5>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&n);
		acu=acu+n;
		if(n>nmg){
			nmg=n;
		}
		i=i+1;
	}
	vprom=acu/5;
	printf("\n El numero promedio es %.2f",vprom);
	printf("\n El numero mas grande es %d",nmg);
	return 0;
}
