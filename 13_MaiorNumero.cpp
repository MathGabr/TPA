/*Fun��o: recebe um valor inteiro e se for maior que 5 e menor que 20, exibe seu cubo
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0, b=0, c=0, maior = 0, cont = 0; 
	
	printf("Informe um n�mero: ");
	scanf("%f", &a);
	
	printf("Informe outro n�mero: ");
	scanf("%f", &b);
	
	printf("Informe mais um n�mero: ");
	scanf("%f", &c);
	
	maior = a;
	
	while (cont < 2){
		if(b > a){
			maior = b;
		}
		else if (c > a){
			maior = c;
		}
		cont = cont + 1;
	}
	
	printf("\nO maior n�mero �: %.2f \n\n\n", maior);

	system("pause");	
}
