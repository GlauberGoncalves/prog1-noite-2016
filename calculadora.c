#include <stdio.h>

float soma(float num1 , float num2)
{
    float resultado;
    resultado = num1 + num2;
    printf("= %f\n", resultado);
}

float subtracao(float num1 , float num2)
{
    float resultado;
    resultado = num1 - num2;
    printf("= %f\n", resultado);
}

float multiplicacao(float num1 , float num2)
{
    float resultado;
    resultado = num1 * num2;
    printf("= %f\n", resultado);
}

float divisao(float num1 , float num2)
{
    float resultado;
    resultado = num1 / num2;
    printf("= %f\n", resultado);
}

int main()
{
    int opcao;
    float num1, num2;


do{
    printf("\nEscolha a opção\n\n");
    printf("1 - adição\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    scanf("%d",&opcao);
    
    
    switch (opcao)
    {
    case 1: // soma
        {
            printf("Entre com num1:");
            scanf("%f",&num1);
            
            printf("Entre com num1:");
            scanf("%f",&num2);
            
            soma(num1,num2);
            break;
        }
    case 2:
        {
            printf("Entre com num1:");
            scanf("%f",&num1);
            
            printf("Entre com num1:");
            scanf("%f",&num2);
            
            subtracao(num1,num2);
            break;
        }    
    case 3: 
        {
            printf("Entre com num1:");
            scanf("%f",&num1);
            
            printf("Entre com num1:");
            scanf("%f",&num2);
            
            multiplicacao(num1,num2);
            break;
        }   
    case 4: 
    
        {
            printf("Entre com num1:");
            scanf("%f",&num1);
            
            printf("Entre com num1:");
            scanf("%f",&num2);
            
            divisao(num1,num2);
            break;
        } 
       default:{
           
                printf("Opção incorreta. Digite novamente");
                break;
              }
       }
    printf("Deseja continuar 1-sim | 2 - não \n");
    scanf ("%d", &opcao);
    system("clear");
    
 }while(opcao != 2);
       
       
    return 0;   
}