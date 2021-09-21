#include <stdio.h>
#include <stdlib.h>

int main()
{
   float  Rackilo,Quantemgra,Quantforn ,Quantrest,Imposto,Racforn;
		 
	
    printf("Digite o peso do saco em kilo = "); 
     
	 scanf("%f", &Rackilo);
	 printf("Digite a ração fornecida  = "); 
     
	 scanf("%f", &Racforn );
    Quantemgra = Rackilo * 1000;
	Quantforn  =   Racforn * 2 ;
	Quantrest = Quantemgra - (Quantforn * 5);
 	printf(" ================================\n ");
	printf("Para dois cachorros  A Quantidade de ração \n\n  restante apôs 5 dias será  de:\n " );
		printf("\n***************%f Gramas ***********   \n" ,Quantrest);
		printf("\n ================================\n "); 
	
	return 0;
}