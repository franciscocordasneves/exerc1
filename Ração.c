#include <stdio.h>
#include <stdlib.h>

int main()
{
   float  Rackilo,Quantemgra,Quantforn ,Quantrest,Imposto,Racforn;
		 
	
    printf("Digite o peso do saco em kilo = "); 
     
	 scanf("%f", &Rackilo);
	 printf("Digite a ra��o fornecida  = "); 
     
	 scanf("%f", &Racforn );
    Quantemgra = Rackilo * 1000;
	Quantforn  =   Racforn * 2 ;
	Quantrest = Quantemgra - (Quantforn * 5);
 	printf(" ================================\n ");
	printf("Para dois cachorros  A Quantidade de ra��o \n\n  restante ap�s 5 dias ser�  de:\n " );
		printf("\n***************%f Gramas ***********   \n" ,Quantrest);
		printf("\n ================================\n "); 
	
	return 0;
}