/*Função: recebe variável a e b, então troca os valores entre elas 
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0, b = 0, c = 0;
	
	printf("Informe um número (a): ");
	scanf("%f", &a);
	
	printf("Informe outro número (b): ");
	scanf("%f", &b);
	
	c = a;
	a = b;
	b = c;

	printf("\nO valor de 'a' é: %.2f \nO valor de 'b' é: %.2f\n\n\n",a,b);

	system("pause");
		
}
