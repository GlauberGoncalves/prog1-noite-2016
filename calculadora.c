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

void recebe_dados( char numero[], char operacao, int muda_numero)
{
	char digitado, cont;
 do
 {
	
	digitado = getchar();
	
	if (digitado == '+' || digitado == '-' || digitado == '*' || digitado == '/')
	{
		operacao = digitado;
		muda_numero = 1;
		printf("\n%c\n", operacao);
	}	
	else if (digitado == 13)
	{
		
		
	}
	else 
	{
		numero[cont] = digitado;
		cont++;
		system("clear");
		printf("%c", numero[cont]);
	}
  }while(1);
	
}

int main()
{
	char char_numero[12], operacao;
	float numero[20], resultado;
	int muda_numero, cont;

	cont = 0;

// inicio do programa	
// Recebe o primeiro numero digitado pelo usuario ea operação
/*	do{
		recebe_dados( char_numero[cont], operacao, muda_numero);
		cont++;
		printf("%c", char_numero);
	}while(muda_numero == 0 || cont == 10);
*/	

recebe_dados(char_numero, operacao, muda_numero);

}