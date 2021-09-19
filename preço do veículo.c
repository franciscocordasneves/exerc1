#include <stdio.h>
#include <stdlib.h>

int main()
{
		float Imposto, Custconsumi,Precofab,Lucro;
		 
	
    printf("Digite o  Preço de fabrico = "); 
     
	 scanf("%f", &Precofab);
	 printf("Digite o  Percentual de lucro  = "); 
     
	 scanf("%f", &Lucro );
	  printf("Digite o  Imposto   = "); 
     
	 scanf("%f", &Imposto );
	 Imposto =  (Precofab * Imposto / 100);
	 Lucro =  (Precofab * Lucro / 100);
    Custconsumi = Imposto + Precofab +  Lucro  ;
 	printf(" ================================\n ");
	printf(" O Preço de Fábrica  é de %f \n ",Precofab );
	printf(" ================================\n ");
	
	printf(" O Lucro  é de %f \n", Lucro );
	printf(" ================================ \n");
	
    printf("O Preço Final do vendedor é de  = %f ", Custconsumi);
    printf("Hello world!\n");
    return 0;
}