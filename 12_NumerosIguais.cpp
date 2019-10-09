/*Função: recebe um valor inteiro e se for maior que 5 e menor que 20, exibe seu cubo
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0, b=0;
	
	printf("Informe um número: ");
	scanf("%f", &a);
	
	printf("Informe outro número: ");
	scanf("%f", &b);
	
	if(a == b){
	    printf("os números são iguais \n\n\n");
	}
	else{
		printf("os números não são iguais \n\n\n");
	}

	system("pause");	
}
