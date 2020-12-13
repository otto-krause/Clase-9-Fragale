-#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,n=0,n1=0;
		printf("\nIngrese un numero ");
  	scanf("%d",&n);
  		printf("\nIngrese otro numero ");
  	scanf("%d",&n1);
  	if (n>n1)
  	{
  			while((n-1)>n1)
  				{
  				n1=n1+1;
  				printf("\n %d",n1);
  				}
	  }
	  else{
	  	  			while((n1-1)>n)
  				{
  				n=n+1;
  				printf("\n %d",n);
  				}
	  }

	return 0;
}
