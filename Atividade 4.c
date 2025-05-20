#include <stdio.h>

int main()
{
	//DECLARAÇÃO DAS VARIAVEIS
	char NOME[30];
	char SOB[30];
	int Idade;
	//ENTRADAS
	printf("ENTRE COM SEU NOME:");
	scanf("%s",&NOME);
	printf("ENTRE COM SEU SOBRENOME:");
	scanf("%s",&SOB);
	printf("ENTRE COM SUA IDADE:");
	scanf("%d", &Idade);
	//SAIDAS
	printf("SEJA BEM-VINDO AO MUNDO DOS ALGORITMOS E DA PROGRAMAÇÃO\n");
	printf("%s %s que tem %d anos\n", NOME, SOB, Idade);
	
	return 0;
	 
	
	
}