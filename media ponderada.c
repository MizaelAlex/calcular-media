#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Programa que recebe três notas e seus respectivos pesos.
Calcula e mostra a média ponderada dessas notas. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, p1, p2, p3, soma;
	
	printf("Insira a primeira nota:\n");
	scanf("%d", &n1);
	
	printf("Insira o peso da primeira nota:\n");
	scanf("%d", &p1);
	
	printf("Insira a segunda nota:\n");
	scanf("%d", &n2);
	
	printf("Insira o peso da segunda nota:\n");
	scanf("%d", &p2);
	
	printf("Insira a terceira nota:\n");
	scanf("%d", &n3);
	
	printf("Insira o peso da terceira nota:\n");
	scanf("%d", &p3);
	
	//Calcular as notas e seus pesos
	soma = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	//Resultado da média 
	printf("Média ponderada: %d.\n", soma);
	
	return 0;
}
