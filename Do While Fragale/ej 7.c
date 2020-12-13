#include <stdio.h>
#include <stdlib.h>

int main()
{
	int z=0,i=1,acu=0,vdv,tv,tdv,mved;

	while(21>i){
		while (15>z){
			printf("\nIngrese las ventas del vendedor %d ",i);
			scanf("%d",&vdv);
			acu=acu+vdv;
			z=z+1;
			}
		printf("\n Vendio un total de %d unidades ",acu);
					if (acu>tdv){
							tdv=acu;
							mved=i;
								}
		tv=tv+acu;
		z=0;
		acu=0;
		i=i+1;
		}
	printf("\n El total de ventas fue %d",tv);
	printf("\n El mejor vendedor fue el numero %d con un total de %d ventas ",mved,tdv);

}
