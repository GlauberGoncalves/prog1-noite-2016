// Comentarios em c
#include <stdio.h>



int main()
{
    int num, resto;
    
    printf("\nDigite um numero inteiro..: ");
    scanf("%d",&num);
    
    resto = num % 2;
    
        if(resto == 1)
        {printf("\nesse numero é par");
        }
            else  printf("%d \n esse numero é impar",num);
        return 0;
}