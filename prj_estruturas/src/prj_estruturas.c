/*
 ============================================================================
 Name        : prj_estruturas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int escolha;

	printf("Digite um número de 1 a 5: ");
	fflush(stdout);
	scanf("%d", &escolha);

	if (escolha == 1) {
		printf("Você escolheu o número 1.\n");
	} else if (escolha == 2) {
		printf("Você escolheu o número 2.\n");
	} else if (escolha == 3) {
		printf("Você escolheu o nùmero 3.\n");
	} else if (escolha == 4) {
		printf("Você escolheu o número 4.\n");
	} else if (escolha == 5) {
		printf("Você escolheu o número 5.\n");
	} else {
		printf("Opção inválida.\n");
	}

	int x, y, result, cont;
	cont = 1;

	while (cont <= 3) {
		printf("Entre com os dois números para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);


		result = x + y;

		printf("O resultado da soma é: %d\n", result);

		cont = cont + 1;
	}

	cont = 1;
	do {
		printf("Entre com os dois números para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;
		printf("O valor da soma é %d \n", result);
		cont++;
	} while (cont <= 3);

	for (cont = 1; cont <= 3; cont ++) {
		printf("Entre com os dois números pra serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("O resultado da soma é: %d\n", result);
	}

	return 0;

}

