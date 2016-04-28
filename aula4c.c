#include <stdio.h>

int i;

int main()
{
    for(i=1;i<=10;i++)
       {
           printf("7 x %d = %d\n", i, i*7);
            sleep(1);
       }    
    return 0;    
}