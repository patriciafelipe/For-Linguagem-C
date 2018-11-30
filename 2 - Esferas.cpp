#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float raio, r,v;
	int i;

	for(i=1;i<=10;i++){
	printf("\n Valor de r: ");
	scanf("%f",&raio);
	r=3,14;
	v=4*r*(raio*raio*raio)/3;
	printf("\n O volume da esfera de raio R é %.2f",v);
	
}
	system("PAUSE");
return 0;
}
