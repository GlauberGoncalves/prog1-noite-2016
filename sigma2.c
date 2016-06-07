#include <stdio.h>

int sigma(int numero)
{
    int i, resultado;
    
    resultado = 1;
    for(i=2;i<=numero;i++)
    {
        resultado = resultado - (i);
    }

    return resultado;
    
}


int main()
{
    int numero;
    
    printf("Informe o numero: ");
    scanf("%d", &numero);
    
    printf("\n %d \n", sigma(numero));
    
}