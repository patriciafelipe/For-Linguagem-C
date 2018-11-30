#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int idade,i;
	
	for(i=1;i<=10;i++){
	
	printf("\n Digite a idade do Nadador(a): ");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7 ){
		printf(" Infantil A \n");
	}
	
	if(idade >= 8 && idade <= 10 ){
		printf(" Infantil B \n");
	}
	
	if(idade >= 11 && idade <= 13 ){
		printf(" Juvenil A \n");
	}
	
	if(idade >= 14 && idade <= 17 ){
		printf(" Juvenil B \n");
	}
	
	if(idade >= 18 ){	
		printf(" Senior \n");
 }
}
	
		system("PAUSE");
  return 0;
}
