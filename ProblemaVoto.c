/*
A partir da idade informada de um cidadão, diga se ele não pode votar (idade inferior
a 16), ou se o voto é facultativo (idade igual a 16 ou 17 ou ainda maior do que 70),
ou ainda se o voto é obrigatório para idades entre 18 e 70 (incluindo estes valores)
*/
#include <stdio.h>

int main()
{
    int idade,voltar;
 
 // Dados digitados pelo usuario 
    printf("*Informe a sua idade*\n");
    scanf("%d", &idade); system("clear");
    
 //     
         if ((idade >= 0) && (idade <= 15) )
                printf("Você ainda não pode votar\n");
         else 
            if  ((idade <= 17) || (idade > 70))
                    printf("Voto facultativo\n");
        else  printf ("Voto é obrigatorio\n");
        

    return 0;
}