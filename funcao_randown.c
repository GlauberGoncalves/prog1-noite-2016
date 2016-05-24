#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* tdd */
int ehpar(int numero)
{
    if (numero % 2 == 0)
        return 1;
    else 
        return 0;
}


void main()
{
    int i, num;
    
    srand( (unsigned)time(NULL));
    
    
    for(i=1;i<=10;i++){
        num = rand() % 100;
        if(ehpar(num))
            printf("\n%d é par", num);
        else 
            printf("\n%d não par", num);
    }    
}    