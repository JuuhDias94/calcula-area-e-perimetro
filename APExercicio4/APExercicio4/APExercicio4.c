#include<stdio.h>
#include <stdlib.h>
#include <locale.h> //para poder usar palavras com acentuação
#include<math.h> //para poder usar pow(elevado) e sqrt(raiz quadrada)

//função void após fim da função main:
void calc_hexa(float L, float* area, float* perimetro);

int main() //início da função main
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentuação

	float lHexagono, aHexagono, pHexagono, c; //variáveis do tipo float

	printf("*** PROGRAMA PARA CALCULAR ÁREA E PERÍMETRO DE HEXÁGONO ***\n\n");

	//pede lado do hexágono:
	printf("Digite um valor para o lado do hexágono (valor negativo encerra o programa):\n");
	scanf_s("%f", &lHexagono);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado


	//para dividir o enunciado do cálculo
	printf("\n___________________________________________________________\n\n");

	//laço de repetição para cálculo de área e perímetro
	while (lHexagono > 0) {
		calc_hexa(lHexagono, &aHexagono, &pHexagono);
		printf("A área do hexágono de lado %.4f é: %.4f\n", lHexagono, aHexagono);
		printf("O perímetro do hexágono de lado %.4f é: %.4f\n", lHexagono, pHexagono);

		//para dividir o enunciado do cálculo
		printf("\n___________________________________________________________\n\n");

		//pede lado do hexágono:
		printf("Digite um valor para o lado do hexágono (valor negativo encerra o programa):\n");
		scanf_s("%f", &lHexagono);
		while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado


		//para dividir o enunciado do cálculo
		printf("\n___________________________________________________________\n\n");
	}

	system("pause");
	return 0;
} //fim da função main

//função que realiza o cálculo de área e perímetro:
void calc_hexa(float L, float* area, float* perimetro) //início da função void
{
	*perimetro = 6 * L;
	*area = (3 * pow(L, 2) * sqrt(3)) / 2;
} //fim da função void
