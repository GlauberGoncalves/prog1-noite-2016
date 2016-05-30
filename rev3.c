#include <stdio.h>

int main()
{
	int notas[10], i, repete, aux;
	for(i=0;i<=9;i++)
	{
		printf("\nDigite a pontuação");
		scanf("%d", &notas[i]);
	}

do
{
  repete = 0;
	for(i=0;i<=8;i++)
	{
		if(notas[i] < notas [i+1])
		{
			repete = 1;
			aux 			= notas[i];
			notas[i]    	= notas[i+1];
			notas[i+1] 	= aux;
		}
	}
}while(repete == 1);

	for(i=0;i<=9;i++)
		printf("\n%dº lugar: %d", i+1, notas[i]);

return 0;
}