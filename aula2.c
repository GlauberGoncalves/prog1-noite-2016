// Comentarios em c
#include <stdio.h>



int main()
{
    // Declaração de variaveis
    int num1, num2;
    //Leitura de dados
    printf("\nEntre com num1..:");
    scanf("%d",&num1);
    
    printf("\nEntre com num2..:");
    scanf("%d",&num2);
    
    // Processa e imprime os dados
     printf("\nsoma..: %d\n",num1+num2);
     printf("\nsubtracao..: %d\n",num1-num2);
     printf("\nmultiplicacao..: %d\n",num1*num2);
     printf("\ndivisao..: %f\n",(float)num1/num2);
     printf("\nObrigado por usar os nossos servicos\n");
    return 0;
}