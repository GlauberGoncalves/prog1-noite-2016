#include <stdio.h>
#include <stdlib.h>


/*
     Calculadora em c
*/

float calcular(float a, float b, char c)
{
	float resultado;

	if ( c == '+' )
	resultado = a + b;
	else
	if ( c == '-' )
	resultado = a - b;
	else
	if ( c == '*' )
	resultado = a * b;	
	else
	if ( c == '/' )
	resultado = a / b;
 return resultado;	
}

char recebe_dados( char visor[], char operacao)
{
	char digitado;
	
	digitado = getchar;
	if (digitado == '+' || digitado == '-' || digitado == '*' || digitado == '/')
		operacao = digitado;
	else
		return digitado;


}

int main()
{
	char a;
	float resultado;
	
	
	printf("%f\n\n", resultado);
	
	resultado = calcular(4, 5, '*');
	
	printf("%f\n\n", resultado);

	
}