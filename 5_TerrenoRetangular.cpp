/*Função: calcula o preço de um terreno retângular
Autor: Matheus Gabriel e Silva
Data:29/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int B = 0, H = 0, area = 0;
	float m2 = 0, preco = 0;
	
	printf("Informe a base do terreno: ");
	scanf("%i", &B);
	
	printf("Informe a altura do terreno : ");
	scanf("%i", &H);
	
	printf("Informe o valor do metro quadrado: ");
	scanf("%f", &m2);
	
	area = H*B;
	preco = area*m2;
	
	printf("O preco do terreno é: %.2f\n\n\n",preco);
	system("pause");
		
}

