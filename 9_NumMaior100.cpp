/*Função: lê um número e verifica se é maior 100, se for maior, soma 150
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0;
	
	printf("Informe um número: ");
	scanf("%f", &n1);
	
	if (n1>100)
	{
		n1 = n1 + 150;
		printf("o número era maior que 100, esse é ele após somarmos 150: %.2f \n\n\n",n1);
	}
	else
	{
		printf("seu número permanece o mesmo: %.2f \n\n\n",n1);
	}
	system("pause");
		
}
