#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Programa que recebe três notas e mostra a média aritmética entre elas. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, soma;
	
	printf("Informe três notas, em sequência.\n");
	
	printf("Primeira nota:\n");
	scanf("%f", &n1);
	
	printf("Segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Terceira nota:\n");
	scanf("%f", &n3);
	
	//Calcular as 3 notas
	soma = (n1 + n2 + n3) / 3;
	
	//Resultado da média
	printf("Média aritmética: %.2f.\n", soma);
	
	return 0;
}
