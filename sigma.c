#include <stdio.h>

int sigma(int numero)
{
    if (numero)
        return numero + sigma(numero - 1);
    else
        return 0;
}

int main()
{
    int numero;
    
    printf("Informe o numero: ");
    scanf("%d", &numero);
    
    printf("\n %d \n", sigma(numero));
}