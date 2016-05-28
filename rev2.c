/*
    Escreva um programa que começa pedindo um número N ao usuário e depois
    pede N números. O programa deverá mostrar na tela todos esses números 
    ordenados do menor para o maior. Escreva sua própria função de ordenação.
*/
#include <stdio.h>

void ordena(int quantidade, int vetor[])
{
    int i, aux, repetir;
    quantidade--;
    do
    {
        repetir = 0;
        for(i=0;i<=quantidade;i++)
        {
            
            if(vetor[i] < vetor[i+1])
            {
                repetir = 1;
                aux        = vetor[i];
                vetor[i]   = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
        
    }while(repetir == 1);
    
    for(i=0;i<=quantidade;i++)
    {
        printf("\n%dº Número %d", i+1, vetor[i]);
    }
}

int main()
{
    int i, quantidade, numero[31];
    
    printf("\nInforme a quantidade de numeros ");
    scanf("%d", &quantidade);
    
    for(i=0;i<=(quantidade - 1);i++)
    {
        printf("%dº Número ", i+1);
        scanf("%d", &numero[i]);
    }
    
    ordena(quantidade, numero);

}