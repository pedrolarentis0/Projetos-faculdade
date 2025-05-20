#include <stdio.h>
int main()
{
	int inteiro;
	float real;
	char texto[50];
	
	
	printf("Digite um valor inteiro:");
	scanf("%d", &inteiro);
	printf("DIgite um valor real:");
	scanf("%f",&real);
	printf("Digite um valor literal:");
	scanf("%s",texto);
	
	printf("Inteiro digitado = %d\n", inteiro);
	printf("Real digitado = %f\n", real);
	printf("Literal digitado = 	%s\n", texto);
	
	
	
	
	
}