#include <stdio.h>
#include <stdlib.h>

int main()
{
 
	int Custo,Convite,Alcance;
		 
	
    printf("Digite o  Custo do espet�culo = "); 
     
	 scanf("%d", &Custo);
	 printf("Digite o Valor de cada Convite   = "); 
     
	 scanf("%d", &Convite );
	 
	 Alcance  =  Custo  / Convite;
  
 	printf(" ================================\n ");
	printf(" Ser� um total de  %d  ",Alcance );
	printf("Convites para alcan�ar o valor do espet�culo \n ");
		printf(" ================================\n ");
	  
	
    return 0;
}