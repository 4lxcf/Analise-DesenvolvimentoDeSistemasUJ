#include <stdio.h>

int main(){
	float matrix[3][3], soma = 0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Digite um valor para a posicao [%d][%d] da matriz.\n", i, j);
			scanf("%f", &matrix[i][j]);
		}	
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("| %.2f ", matrix[i][j]);
			soma += matrix[i][j];
		}
		printf("|\n");
	}
	
	printf("Soma dos valores: %.2f.", soma);
	
	return 0;
}
