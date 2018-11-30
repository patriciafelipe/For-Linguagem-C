#include <stdio.h>
#include <stdlib.h>

int  main(int argc,char*argv []){
	int opcao, i, n, num;
	
	for(i=1;i<=5;i++){

	printf("Escolha uma das seguintes opções: 1: Soma, 2: Subtrair, 3: Multiplicar, 4: Dividir ");
	printf("Digite a sua opção: ");
	scanf("%d",&opcao);
	
	printf("Digite um valor:");
	scanf("%d",&n);
	printf("Digite um valor:");
	scanf("%d",&num);
	
	if(opcao==1){
	printf("Seu resultado é: %d \n", (n+num));
	}
	else
	if(opcao==2){
		printf("Seu resultado é: %d \n", (n-num ));
	}
	else
	if(opcao==3){
		printf("Seu resultado é: %d \n", (n*num));
	}
	else
	if(opcao==4){
		printf("Seu resultado é: %d \n", (n/num) );
	}
}
		system("PAUSE");
	return  0 ;
}
