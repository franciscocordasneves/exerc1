#include <stdio.h>
#include <stdlib.h>

int main()
{
	 
   float  Quantkilow ,Salmin,  Umkilow ,Valserpago,Quantkilowcons;
		 
	
    printf("Digite o Salário Mínimo  = "); 
     
	 scanf("%f", &Salmin);
	
	 printf("Digite a  Quantidade de kilowatts  Consumida pela residência  = "); 
      
	  scanf("%f", &Quantkilowcons );
      
    Umkilow = Salmin*( 1/3);
	Quantkilow  =   Umkilow * Quantkilowcons;
	Valserpago = Quantkilow - (Quantkilowcons *(15/100));
	
 	printf(" ================================\n ");
	printf("O valor de cada Kilowatts é :  \n ");
		printf("\n***************%f  ***********   \n" ,Umkilow);
		printf("\n ================================\n ");
	printf("O valor a ser pago por essa residência é de : " );
		printf("\n***************%f  ***********   \n" ,Quantkilow);
		printf("\n ================================\n ");
	printf("O valor a ser pago com descontos  : " );
		printf("\n***************%f  ***********   \n" ,	Valserpago);
		printf("\n ================================\n "); 
    return 0;
}