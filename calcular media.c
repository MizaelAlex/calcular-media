#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Programa que recebe tr�s notas e mostra a m�dia aritm�tica entre elas. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, soma;
	
	printf("Informe tr�s notas, em sequ�ncia.\n");
	
	printf("Primeira nota:\n");
	scanf("%f", &n1);
	
	printf("Segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Terceira nota:\n");
	scanf("%f", &n3);
	
	//Calcular as 3 notas
	soma = (n1 + n2 + n3) / 3;
	
	//Resultado da m�dia
	printf("M�dia aritm�tica: %.2f.\n", soma);
	
	return 0;
}
