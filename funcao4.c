/*
	Trabalhando com funções simples

*/

#include <stdio.h>

int elevar(int numero, int potencia)
{
	int resultado, i;
	
	resultado = numero;
	
	for(i=2;i<=potencia;i++)
	{
		resultado = resultado * resultado;
	}

 return resultado;
	
}



void main()
{
	int resultado;
	
	resultado =  elevar(2 , 5);
	
	printf("\n%d\n", resultado);
}