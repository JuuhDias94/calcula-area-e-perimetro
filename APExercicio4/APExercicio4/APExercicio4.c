#include<stdio.h>
#include <stdlib.h>
#include <locale.h> //para poder usar palavras com acentua��o
#include<math.h> //para poder usar pow(elevado) e sqrt(raiz quadrada)

//fun��o void ap�s fim da fun��o main:
void calc_hexa(float L, float* area, float* perimetro);

int main() //in�cio da fun��o main
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentua��o

	float lHexagono, aHexagono, pHexagono, c; //vari�veis do tipo float

	printf("*** PROGRAMA PARA CALCULAR �REA E PER�METRO DE HEX�GONO ***\n\n");

	//pede lado do hex�gono:
	printf("Digite um valor para o lado do hex�gono (valor negativo encerra o programa):\n");
	scanf_s("%f", &lHexagono);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado


	//para dividir o enunciado do c�lculo
	printf("\n___________________________________________________________\n\n");

	//la�o de repeti��o para c�lculo de �rea e per�metro
	while (lHexagono > 0) {
		calc_hexa(lHexagono, &aHexagono, &pHexagono);
		printf("A �rea do hex�gono de lado %.4f �: %.4f\n", lHexagono, aHexagono);
		printf("O per�metro do hex�gono de lado %.4f �: %.4f\n", lHexagono, pHexagono);

		//para dividir o enunciado do c�lculo
		printf("\n___________________________________________________________\n\n");

		//pede lado do hex�gono:
		printf("Digite um valor para o lado do hex�gono (valor negativo encerra o programa):\n");
		scanf_s("%f", &lHexagono);
		while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado


		//para dividir o enunciado do c�lculo
		printf("\n___________________________________________________________\n\n");
	}

	system("pause");
	return 0;
} //fim da fun��o main

//fun��o que realiza o c�lculo de �rea e per�metro:
void calc_hexa(float L, float* area, float* perimetro) //in�cio da fun��o void
{
	*perimetro = 6 * L;
	*area = (3 * pow(L, 2) * sqrt(3)) / 2;
} //fim da fun��o void
