#include <stdio.h>
#include <stdlib.h>

int  main(int argc,char*argv []){
	float a,b,c;
	int i;

	for(i=1;i<=10;i++){
	
	printf("Digite o valor do lado A: \n");
	scanf("%f",&a);
	
	printf("Digite o valor do lado B: \n");
	scanf("%f",&b);
	
	printf("Digite o valor do lado C: \n");
	scanf("%f",&c);

	if(a+b>=c&&a+c>=b&&b+c>=a){
	
		if(a==b&&b==c&&c==a){
		printf("Triângulo Equilatero \n");
		}
		
		else 
		if(a==b||b==c||c==a){
		printf(" Triângulo Isosceles \n");
		}
		
		else  
		if(a!=b&&b!=c&&c!=a){
		printf("Triângulo Escaleno \n");
		}
	}
}
		system("PAUSE");
	return  0 ;
}
