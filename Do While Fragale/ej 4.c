#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,fcl=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&n);
	while(n>1){
	fcl=fcl*n;
	n=n-1;
		}
	printf("\nSu factorial es  %d",fcl);
}
