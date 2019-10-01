/*Função: calcula o aumento de um salário
Autor: Matheus Gabriel e Silva
Data:30/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	float s = 0.0, sf = 0.0, a = 0.0;
	
	printf("Informe o salário atual: ");
	scanf("%f",&s);

	printf("Informe a porcetagem do aumento: ");
	scanf("%f",&a);
	
	sf = a/100*s+s;
	
	printf("O novo salário é: %f\n\n\n",sf);
	system("pause");
		
}
