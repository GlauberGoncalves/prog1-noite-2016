/*
    trabalhando com funções simples
*/

#include <stdio.h>

/*
    função imprime numeros imprime um intervalo de numeros onde num1 é menor
    que num 2
*/

int imprime_numeros(int num1, int num2)
{
    int i;
    

    if (num1 <= num2)
        for(i=num1;i<=num2;i++)
            printf("%d ", i);
    printf("\n\n\n");
}

//***************Inicio******************//
int main()
{
    int num1, num2;
    
 do{    
    
    system("clear");
    printf("Digite 2 numeros\n");
    printf("O primeiro numero tem que ser menor que o segundo\n");
    printf("digite um numero x ");
    scanf("%d",&num1);
    
    system("clear");
    printf("\nAgora digite um numero maior\n");
    scanf("%d",&num2);
 
     
 }while(num1 > num2);
 
    imprime_numeros(num1,num2);
    
    return 0;
}

