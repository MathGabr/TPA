/*Fun��o: calcula o pre�o de uma presta��o atrasada
Autor: Matheus Gabriel e Silva
Data:29/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float v = 0, t = 0, tempo = 0, preco = 0;
	
	printf("Informe o valor da presta��o: ");
	scanf("%f", &v);
	
	printf("Informe o valor da taxa: ");
	scanf("%f", &t);
	
	printf("Informe a quantos meses ela est� atrasada: ");
	scanf("%f", &tempo);
	
	preco = v+(v*(t/100)*tempo);
	
	printf("O preco do atraso �: %f\n\n\n",preco);
	system("pause");
		
}

