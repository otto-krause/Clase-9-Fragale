#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
  {
int salario=0,msp=0,mnp=0,i=0;
while(20>i){
  printf("Ingrese su salario correspondiente ");
  scanf("%d",&salario);
        if (salario<20000){
          mnp=mnp+1;
          } 	else  {
              msp=msp+1;
            }
  i=i+1;
  }
  printf("\n El total de personas que ganan mas del salario promedio son %d ",msp);
  printf("\n El total de personas que ganan menos del salario promedio son %d ",mnp);
return 0;
}
