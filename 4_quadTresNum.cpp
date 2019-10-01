/*Função: lê três valores inteiros e exibe o quadrado da soma dos valores
Autor: Matheus Gabriel e Silva
Data:29/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0, quad = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%i", &n1);
	
	printf("Informe o segundo valor: ");
	scanf("%i", &n2);
	
	printf("Informe o terceiro valor: ");
	scanf("%i", &n3);
	
	quad = n1+n2+n3;
	quad = quad*quad;
	
	printf("O quadrado da soma dos numeros informados é: %i\n\n\n",quad);
	system("pause");
		
}

