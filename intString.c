#include <stdio.h>

int main()
{
    float av1, av2, media;
    char nome [100];
    
    // Nome
    printf("\nDigite deu nome...: ");
    scanf("%s", nome);
    system("clear");
    // AV1
    printf("\nNota da Av1.......: ");
    scanf("%f", &av1);
    system("clear");    
    
    printf("\nNota da Av2.......: ");
    scanf("%f", &av2);
    system("clear");     
    
    media = (av1 + av2)/2;
    
    printf("\nOlá %s, sua media é %.2f\n", nome, media);

}