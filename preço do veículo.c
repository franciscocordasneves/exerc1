#include <stdio.h>
#include <stdlib.h>

int main()
{
		float Imposto, Custconsumi,Precofab,Lucro;
		 
	
    printf("Digite o  Pre�o de fabrico = "); 
     
	 scanf("%f", &Precofab);
	 printf("Digite o  Percentual de lucro  = "); 
     
	 scanf("%f", &Lucro );
	  printf("Digite o  Imposto   = "); 
     
	 scanf("%f", &Imposto );
	 Imposto =  (Precofab * Imposto / 100);
	 Lucro =  (Precofab * Lucro / 100);
    Custconsumi = Imposto + Precofab +  Lucro  ;
 	printf(" ================================\n ");
	printf(" O Pre�o de F�brica  � de %f \n ",Precofab );
	printf(" ================================\n ");
	
	printf(" O Lucro  � de %f \n", Lucro );
	printf(" ================================ \n");
	
    printf("O Pre�o Final do vendedor � de  = %f ", Custconsumi);
    printf("Hello world!\n");
    return 0;
}