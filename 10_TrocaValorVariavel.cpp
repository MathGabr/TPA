/*Fun��o: recebe vari�vel a e b, ent�o troca os valores entre elas 
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0, b = 0, c = 0;
	
	printf("Informe um n�mero (a): ");
	scanf("%f", &a);
	
	printf("Informe outro n�mero (b): ");
	scanf("%f", &b);
	
	c = a;
	a = b;
	b = c;

	printf("\nO valor de 'a' �: %.2f \nO valor de 'b' �: %.2f\n\n\n",a,b);

	system("pause");
		
}
