/*
	Trabalhando com funções simples

*/

#include <stdio.h>

int cadastro()
{
	char nome[20], sexo[2], cidade[20];
	int idade;
	
	system("clear");
	printf("\nNome..: ");scanf("%s",nome);system("clear");
	printf("\nIdade..: ");scanf("%d",&idade);system("clear");
	printf("\nSexo..: ");scanf("%s",sexo);system("clear");
	printf("\nCidade..: ");scanf("%s",cidade);system("clear");
	printf("\nCadastro concluido com Sucesso!\n\n");
	getchar();
	
}



void main()
{
	cadastro();
}