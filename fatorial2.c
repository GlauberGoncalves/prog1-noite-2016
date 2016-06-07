#include <stdio.h>

int fat(int numero)
{
    if (numero)
        return numero * fat(numero - 1);
    else
     return 1;
}


int main()
{
    int numero;
    
    printf("Informe o numero: ");
    scanf("%d", &numero);
    
    printf("\n %d \n", fat(numero));
    
}