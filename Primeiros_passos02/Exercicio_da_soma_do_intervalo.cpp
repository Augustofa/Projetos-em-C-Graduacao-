#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h> 
//stdio.h = printf e scanf
//math.h = opera��es matem�ticas
//string.h = uso e declara��o de strings
//conio.h = comando getch

/*	Exerc�cio que calcula a soma dos n�meros no intervalo digitado	*/

int main () {
	
	int num1, num2, diferenca, soma;
	printf ("Digite um intervalo, primeiramente o menor numero, depois o maior numero.\n");
	scanf ("%d %d", &num1, &num2);
	
	//consertando o bug do 0:
	if (num1 == 0) {
		num1 = 1;
	}
	
	diferenca = num2 - num1;
	soma = num1 + num2 + diferenca - 1;

	while (diferenca > 0) {
		diferenca--;
		soma += diferenca;
	}
	
	printf ("A soma e %d", soma);
	
	return 0;
}
