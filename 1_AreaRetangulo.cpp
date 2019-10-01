/*Função: calcula a área de um retângulo
Autor: Matheus Gabriel e Silva
Data:26/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int H = 0, B = 0, area = 0;
	
	printf("Informe a base do retângulo: ");
	scanf("%i", &B);
	
	printf("Informe a altura do retângulo: ");
	scanf("%i", &H);
	
	area = H*B;
	printf("Área = %i\n\n\n",area);
	system("pause");
		
}

