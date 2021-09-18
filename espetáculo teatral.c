#include <stdio.h>
#include <stdlib.h>

int main()
{
 
	int Custo,Convite,Alcance;
		 
	
    printf("Digite o  Custo do espetáculo = "); 
     
	 scanf("%d", &Custo);
	 printf("Digite o Valor de cada Convite   = "); 
     
	 scanf("%d", &Convite );
	 
	 Alcance  =  Custo  / Convite;
  
 	printf(" ================================\n ");
	printf(" Será um total de  %d  ",Alcance );
	printf("Convites para alcançar o valor do espetáculo \n ");
		printf(" ================================\n ");
	  
	
    return 0;
}