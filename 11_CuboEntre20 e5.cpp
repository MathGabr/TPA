/*Fun��o: recebe um valor inteiro e se for maior que 5 e menor que 20, exibe seu cubo
Autor: Matheus Gabriel e Silva
Data:09/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float a = 0;
	
	printf("Informe um n�mero: ");
	scanf("%f", &a);
	
	if(a < 20 && a>5){
		a = a*a*a;
	    printf("o cubo do n�mero informado �: %.2f \n\n\n",a);
	}
	else{
		printf("O n�mero informado permanece sendo: %.2f \n\n\n",a);
	}

	system("pause");
		
}
