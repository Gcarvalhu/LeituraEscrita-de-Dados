#include <stdio.h>
#include <stdlib.h>

/*Calcula e informa a soma de 2 valores*/

int main() {
	
	int val1;
	int val2;
	int soma;
	
	printf("digite o primeiro valor");
	scanf( "%d" , &val1);//variavel digitada está sendo lida e armazenada na int val1
	printf("\ndigite o segundo valor");
	scanf("%d", &val2);
	
	soma = val1 + val2;
	
	printf("Resultado: %d", soma);
	
	return 0;
}
