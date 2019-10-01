/*Função: calcula a área de um triangulo
Autor: Matheus Gabriel e Silva
Data:30/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	float b = 0.0, h = 0.0, area = 0.0;
	
	printf("Informe a base do triângulo: ");
	scanf("%f",&b);

	printf("Informe a altura do triângulo: ");
	scanf("%f",&h);
	
	area = b*h/2;
	
	printf("A área do triângulo é: %f\n\n\n",area);
	system("pause");
		
}
