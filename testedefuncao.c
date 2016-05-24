#include <stdio.h>
/* tdd */
float media_lasalle(float av1, float av2, float av3)
{
    float media;
    
    if(av3 > av1 || av3 > av2){
        if(av1 > av3)
            media = (av1 + av3)/2;
        else
            media = (av2 + av3)/2;
    }else
        media = (av1 + av2)/2;
    
    return media;
}


void main()
{
    float media;


    media = media_lasalle(10, 6, 4);
    if(media == 8)
        printf("\n 1. Caso de teste OK!");
    else
        printf("\n 1. Caso de teste FALHOU!");
        

    media = media_lasalle(10, 6, 8);
    if(media == 9)
        printf("\n 1. Caso de teste OK!");
    else
        printf("\n 1. Caso de teste FALHOU!");
           

    media = media_lasalle(1, 2, 8);
    if(media == 5)
        printf("\n 1. Caso de teste OK!");
    else
        printf("\n 1. Caso de teste FALHOU!");


    media = media_lasalle(10, 10, 8);
    if(media == 10)
        printf("\n 1. Caso de teste OK!");
    else
        printf("\n 1. Caso de teste FALHOU!");            
}