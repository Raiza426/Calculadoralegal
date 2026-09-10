#include "stdio.h"

int main(){

	printf("Digite dois números: \n");
	double numero;
	scanf_s("%lf", &numero);
	double outro_numero;
	scanf_s("%lf", &outro_numero);

	double soma = numero + outro_numero;
	printf("Soma: %0.2lf \n", soma);
	
	double subtracao = numero - outro_numero;
	printf("Subtraçao: %0.2lf \n", subtracao);

	double multiplicacao = numero * outro_numero;
	printf("Multiplicacao: %0.2lf \n", multiplicacao);

	if ( outro_numero == 0) {
		printf("indeterminaçao, digite um valor diferente de 0\n");
		scanf_s("%lf", &outro_numero);
		double divisao = numero / outro_numero;
		printf("Divisao: %0.2lf \n", divisao);
	}
	else {
		double divisao = numero / outro_numero;
		printf("Divisao: %0.2lf \n", divisao);
	}

	
	return 0;
}