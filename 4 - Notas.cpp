#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float nt1,nt2,nt3,nt4,media;
int i;

	for(i=1;i<=5;i++){

	printf("\n 1° Bimestre:");
		scanf("%f", &nt1);
	printf("\n 2° Bimestre:");
		scanf("%f", &nt2);
	printf("\n 3° Bimestre:");
		scanf("%f", &nt3);
	printf("\n 4° Bimestre:");
		scanf("%f", &nt4);
		
	media = (nt1+nt2+nt3+nt4)/4;
	printf(" Nota Final: %f \n", media);

	if(media >= 9){
	printf("Aprovado \n");
	}		
	
	else 
	if(media >=7 && media <9){
		printf("Aprovado \n");
	}
	else 
	if(media >=5 && media <7){
		printf("Aprovado \n");
	}
	else 
	if(media >=2.5 && media <5){
		printf("Reprovado \n");
	}
	else 
	if(media <= 2.5){
		printf("Reprovado \n");
	}
}
	
	system("PAUSE");
  return 0;
}
