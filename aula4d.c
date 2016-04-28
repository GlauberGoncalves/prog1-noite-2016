#include <stdio.h>

int i,tab;

int main()
{
    printf("Qual tabuada você deseja?\n");
    scanf("%d", &tab);
    
    for(i=1;i<=10;i++)
       {
           printf("%d x %d = %d\n",tab, i, i*tab);
           
       }    
    return 0;    
}