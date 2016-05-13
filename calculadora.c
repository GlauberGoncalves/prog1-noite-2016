#include <stdio.h>
#include <stdlib.h>

/*
     Calculadora em c
*/

float calcular(char num1[], char num2[], char operacao)
{
	float numero1, numero2, resultado;
	
	numero1 = atof(num1);
	numero1 = atof(num2);

	if ( operacao == '+' )
	resultado = numero1 + numero2;
	else
	if ( operacao == '-' )
	resultado = numero1 - numero2;
	else
	if ( operacao == '*' )
	resultado = numero1 * numero2;	
	else
	if ( operacao == '/' )
	resultado = numero1 / numero2;
 return resultado;	

//	resultado = calcular(4, 5, '*'); já testado

}

char recebe_numero( char numero[])
{
	char digitado, cont;
	do
	{
		digitado = getchar();
			if (digitado == '+' || digitado == '-' || digitado == '*' || digitado == '/' || digitado == '=')
			{				
				break;
			}else
				{
					numero[cont] = digitado;
					system("clear");
					printf("%s", numero);
					cont++;
				}
	}while(1);
 return digitado;
}

int main()
{
		char numero1[9], numero2[9], operacao;

		operacao = recebe_numero( numero1 );
		printf("\n%c\n", operacao);
		recebe_numero( numero2);
		printf("\n-------------\n");
		calcular(numero1, numero2, operacao);

	
	return 0;
}