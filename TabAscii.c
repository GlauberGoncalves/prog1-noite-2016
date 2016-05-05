#include <stdio.h>

void tab_ascii()
{
    char i,letra;
    
    for(i=33;i<=126;i++)
    printf("caracter = %c | ascii %d \n", i, i);
}

int main()
{
    tab_ascii();
    return 0;
}