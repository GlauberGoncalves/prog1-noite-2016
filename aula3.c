#include <stdio.h>

int main()
{
    int hora;
    
    // coleta dados do usuario
    printf("Informe a hora atual\n");
    scanf("%d", &hora);
    
    // Area condicional 
    
    if ((hora>=0) && (hora < 12))
        printf("\nBom dia!!!\n");
    else
        if (hora <18)
            printf("\nBoa Tarde!!!\n");
    else
        if (hora < 24)
            printf("\nBoa Noite\n");
            
    return 0;
}