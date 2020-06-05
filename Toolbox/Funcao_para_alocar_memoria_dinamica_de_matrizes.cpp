/* Prot�tipo: */

int** alocar_matriz (int m, int n);

// 	Fun��o para alocar mem�ria de uma matriz dinamicamente:

int** alocar_matriz (int m, int n) {
	
	int **v, i;
	
	// conferindo os parametros (ver se � realmente uma matriz)
	if (m < 1 || n <1) {
		printf ("Erro: Parametros invalidos.");
		return NULL;
	}
	
	v = (int**) calloc(m, sizeof(int*));
	
		// Mensagem de erro caso n�o haja mem�ria o suficiente para criar um vetor de ponteiros
		if (v == NULL) {
			printf ("Erro: Memoria insuficiente.");
			return NULL;
		}
	
	// 	Alocando vetores para cada linha (ponteiro) do ponteiro de ponteiros (vetor de ponteiros)
	for (i = 0; i < m; i++) {
		v[i] = (int *) calloc (n, sizeof(int));
		
		//	Mensagem de erro caso n�o haja mem�ria o suficiente para criar um vetor para cada linha
		if (v[i] == NULL) {
			printf ("Erro: Memoria insuficiente.");
			return NULL;
		}
	}
	return v;
}
