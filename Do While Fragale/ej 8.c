#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int n=0,np=0,nn=0,zero=0,i=0;
	while(10>i){
		printf("Ingrese un numero ");
		scanf("%d",&n);
					if (n>0){
						np=np+1;
						} 	else if(n<0) {
								nn=nn+1;
							} else {
								zero=zero+1;
							}
		i=i+1;
		}
		printf("\n El total de numeros positivos es %d ",np);
		printf("\n El total de numeros negativos es %d ",nn);
		printf("\n El numero total de ceros es %d ",zero);
	return 0;
}
