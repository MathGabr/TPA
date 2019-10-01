/*Funçăo: calcula a área de um circulo
Autor: Matheus Gabriel e Silva
Data:29/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	float r = 0.0, area = 0.0;
	const double PI = 3.1415;
	
	printf("Informe o raio do círculo: ");
	scanf("%f",&r);
	
	area = r*r*PI;
	
	printf("Área = %.2f\n\n\n",area);
	system("pause");
		
}
