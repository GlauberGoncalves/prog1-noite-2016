#include <stdio.h>

int main()
{
    int maior, menor, numero, opcao;
    
    maior = -99999;
    menor =  99999;
    
do
 {
    printf("Entre com um numero\n");
    scanf("%d",&numero);
    
    if (numero < menor)
        {
            menor = numero;
         }
    if (numero > maior)
        {
         maior = numero;
        }
        
    printf("Deseja continuar 1-sim | 2-não \n");
    scanf("%d",&opcao);

 }while( opcao != 2);
 
 system("clear");
 printf("Maior numero = %d \n", maior);
 printf("Maior numero = %d \n", menor);
 
 return 0;   
}