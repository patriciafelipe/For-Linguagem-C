#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float raio, altura, volume;
int i;
	
	for(i=1;i<=10;i++){

printf("\n Informe o raio: ");
scanf("%f",&raio);
printf("\n Informe a altura: ");
scanf("%f",&altura);
volume=3.14*(raio*raio)*altura;
printf("\n A �rea externa da lata � %2.f",volume);
}
	system("PAUSE");
return 0;
}
