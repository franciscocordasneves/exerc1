#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Anoact, Anonasc, idade ,idade2050;
	
    printf("Digite o Ano atual = ");
     
	 scanf("%d", &Anoact);
    
     printf("Digite o  Ano de nascimento   = ");
    
	scanf("%d", &Anonasc);
	idade = Anoact-Anonasc;
	idade2050 = 2050 - Anonasc ;
	
	 printf("Você tem %d  anos \n", idade    );
	 printf("  Em 2050 Você terá  %d  anos de idade\n ", idade2050  );
	
    return 0;
}