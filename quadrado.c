#include <stdio.h>

void DesenhaQuadrado(int lado, char caracter )
{
    int i, j;



// laço responsavel por desenhar o quadrado
    for(i=1; i<=lado;i++)
    {
// escreve a primeira e a ultima linha do quadrado
       if( i == 1 || i==lado)
       {		   
          for (j=1;j<=lado;j++)
	printf("%c", caracter);
	printf("\n"); //
        }else
        {
          for (j=1;j<=lado;j++)
	if (j ==1 || j==lado)
	 printf("%c", caracter);
	else printf(" ");
	printf("\n");
        }
     }
}

int main()
{
  int lado;
  char caracter;
 
  // Solicita a medida do lado ao usuario
 
   printf("Informe o lado");
   scanf("%d", &lado);
  
 DesenhaQuadrado( lado , '*');
}