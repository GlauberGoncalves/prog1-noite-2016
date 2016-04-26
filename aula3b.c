#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    // coleta dados do usuario
    printf("\nInforme Nota 1\n");
    scanf("%f", &nota1);
    
    printf("\nInforme Nota 2\n");
    scanf("%f", &nota2);
    
    // Area condicional 
    
    media = ((nota1 + nota2) / 2);
    
    if (media <= 5.0)
        printf("\nMedia: %f - Reprovado\n",media);
    else 
        if (media < 7)
        printf("\nMedia: %f - Recuperação\n",media);
    else
        if (media <= 10)
        printf("\nMedia: %f - Aprovado\n",media);    
            
    return 0;
}