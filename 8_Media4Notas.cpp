/*Fun��o: recebe 4 notas e calcula a m�dia entre elas
Autor: Matheus Gabriel e Silva
Data:30/09/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1= 0, n2= 0, n3= 0, n4= 0, media= 0;
	
	printf("Informe a primeira nota: ");
	scanf("%i", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%i", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%i", &n3);
	
	printf("Informe a quarta nota: ");
	scanf("%i", &n4);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("A m�dia entre as notas �: %i\n\n\n",media);
	system("pause");
		
}

