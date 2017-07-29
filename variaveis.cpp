#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

main(){
	int nVal1, nVal2, nTotal;
	printf("Entre com o primeiro valor: \n");
	scanf("%i", &nVal1);
	printf("Entre com o segundo valor:\n");
	scanf("%i", &nVal2);
	nTotal = nVal1 + nVal2;
	printf("\n \n A soma de %i + %i e igual a %i", nVal1, nVal2, nTotal);
}
