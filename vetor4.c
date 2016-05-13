/*
	Trabalhando com vetores
*/

#include <stdio.h>


void recebe_matriz_3x3(int matriz[][3])
{
	int i , j;
	
	for (i=0;i<=2;i++)
		for (j=0;j<=2;j++)
		{
			printf("\nDe o valor de L%d C%d : ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}


void imprime_matriz_3x3(int matriz[][3])
{
	int i , j;
	system("clear");
	printf("\nMatriz 3x3\n");
	printf("-----------------\n");
	for (i=0;i<=2;i++)
	{
		
	
		for (j=0;j<=2;j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
}



int main()
{
	int matriz[3][3];
	
	recebe_matriz_3x3(matriz);
	imprime_matriz_3x3(matriz);

}