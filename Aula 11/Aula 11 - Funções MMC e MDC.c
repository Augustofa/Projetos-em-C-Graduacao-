#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

	/* Crie duas fun��es que recebam 3 n�meros inteiros. Uma delas deve retornar o m�ximo divisor comum (m.d.c.) e a outra, o m�nimo m�ltiplo comum (m.m.c.)
	desses n�meros. Crie um programa que leia 3 n�meros inteiros, execute as duas fun��es e mostre o mmc e o mdc desses n�meros. */

	int mmc(int x, int y, int z);
	int mdc(int x, int y, int z);


	void main {

	int x, y, z;
	int mmc, mdc;

	printf ("Digite 3 numeros no formato x y z\n");
	scanf ("%d %d %d", &x, &y, &z);

	// lembrando que talvez seja necess�rio mudar o nome da vari�vel que vai invocar a fun��o. Da outra vez, deu ruim rsrs bom conferir se � uma regra.

	mmc = mmc(x, y, z);
	printf ("o mmc de  %d, %d e %d e: %d\n", x, y, z, mmc);

	mdc = mdc(x, y, z);
	printf ("o mdc de  %d, %d e %d e: %d\n", x, y, z, mdc);


	getch();


}

	int mmc(int x, int y, int z) {
		int result;

		/* Crivo de er�stotenes ou fun��o para colocar primos em um array + if que vai andando no array (pegando o pr�ximo primo); + divis�o sucessiva pelo
		menor primo poss�vel */

		return result;
	}
	int mdc(int x, int y, int z) {
		int result;

		// algoritmo de euclides

		return result;
	}
