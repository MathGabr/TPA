/*Função: recebe três valores e exibe o maior número entre eles
Autor: Matheus Gabriel e Silva
Data:09/10/2019
Data alteração:16/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0, b=0, c=0, maior = 0, cont = 0; 
	
	printf("Informe um número: ");
	scanf("%f", &a);
	
	printf("Informe outro número: ");
	scanf("%f", &b);
	
	printf("Informe mais um número: ");
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
	
	printf("\nO maior número é: %.2f \n\n\n", maior);

	system("pause");	
}
