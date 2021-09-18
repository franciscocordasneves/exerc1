#include <stdio.h>
#include <stdlib.h>

int main()
{
	
		float  Quantconvite, Custo, Convite ;
	
    printf("Digite o  Custo do espetáculo = "); 
     
	 scanf("%f", &Custo);
	 printf("Digite o  Valor de um convite  = "); 
     
	 scanf("%f", &Convite );
	 
    Quantconvite = Custo / Convite   ;
 	printf(" ================================\n ");
	printf(" O Valor do espetáculo é %f \n ", Custo);
	printf(" ================================\n ");
	
	printf(" O Valor do convite   é  %f \n", Convite );
	printf(" ================================ \n");
	
    printf("A Quantidade de convite a ser vendido é de  = %f\n", Quantconvite);
    printf(" a serem vendidos ");
    printf(" ================================ \n");
   
    return 0;
}