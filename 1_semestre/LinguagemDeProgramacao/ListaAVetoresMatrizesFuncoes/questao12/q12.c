#include <stdio.h>

int main(){
	float matrix[4][4], soma;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("Digite um valor para a posicao [%d][%d] da matriz.\n", i, j);
			scanf("%f", &matrix[i][j]);
		}	
	}
	
	for(int i=0; i<4; i++){
		soma = 0;
		for(int j=0; j<4; j++){
			printf("| %.2f ", matrix[i][j]);
			soma += matrix[i][j];
		}
		printf("| Soma da Linha %d: %.2f\n", i, soma);
	}
	
	return 0;
}
