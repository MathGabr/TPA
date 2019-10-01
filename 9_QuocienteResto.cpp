/*Função: exibe o quociente e o resto da divisão do número informado
Autor: Matheus Gabriel e Silva
Data:30/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1= 0, n2=0, resto=0, quo=0;
	
	printf("Informe o dividendo: ");
	scanf("%i", &n1);
	
	printf("Informe o divisor: ");
	scanf("%i", &n2);
	
	quo = n1 / n2;
	resto = n1 % n2;
	
	printf("O quociente é: %i. E o resto é de: %i\n\n\n", quo, resto);
	system("pause");
		
}

