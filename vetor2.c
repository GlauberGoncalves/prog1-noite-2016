/*
	Trabalhando com vetores
*/

#include <stdio.h>

void main()
{
	int l, c, cont;
	float av[5][4];
	cont = 0;
	
	for(l=1;l<=4;l++)
	for(c=1;c<=3;c++){
		printf("\nEntre com a AV%d do aluno %d ", c, l);
		scanf("%f", &av[l][c]);
		system("clear");
	}
		printf("Aluno\tAv1\tAv2\tAv3\n");
		for(l=1;l<=4;l++){
			printf("Aluno %d\t", l);
		
		
			     for(c=1;c<=3;c++){
					printf("%.2f\t", av[l][c]);
						cont++;
						if (cont == 3){
						  printf("\n");
						  cont = 0;
						}  
		 		}
		}
}