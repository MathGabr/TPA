/*Fun��o: calcula a �rea de um ret�ngulo
Autor: Matheus Gabriel e Silva
Data:26/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int H = 0, B = 0, area = 0;
	
	printf("Informe a base do ret�ngulo: ");
	scanf("%i", &B);
	
	printf("Informe a altura do ret�ngulo: ");
	scanf("%i", &H);
	
	area = H*B;
	printf("�rea = %i\n\n\n",area);
	system("pause");
		
}

