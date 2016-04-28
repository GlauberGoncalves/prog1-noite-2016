#include <stdio.h>

int i,tab;

int main()
{
    do
    {
    
    printf("Qual tabuada você deseja?\n");
    scanf("%d", &tab);
 
    } while (tab < 0 || tab > 10);
    
    for(i=1;i<=10;i++)
       {
           printf("%d x %d = %d\n",tab, i, i*tab);
           
       }    
    return 0;    
}