/*
    Escreva uma função que peça dois números inteiros ao 
    usuário e exibe o valor soma seguido pelo maior deles.
*/
#include <stdio.h>

int myboo(int a, int b)
{
    int result;
    printf("\nDigite num A ");
    scanf("%d", &a);
    
    printf("\nDigite num B ");
    scanf("%d", &b);
    
    result = a + b;
    return result;
}

int main()
{
    int a, b;
  
    printf("\nA soma é %d\n", myboo(a , b));
    
    return 1;
}