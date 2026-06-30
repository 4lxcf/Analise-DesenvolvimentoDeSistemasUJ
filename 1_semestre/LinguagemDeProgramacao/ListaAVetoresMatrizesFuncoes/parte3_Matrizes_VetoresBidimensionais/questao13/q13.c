#include <stdio.h>

int main(){
	float matrix[5][5], maior = 0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("Digite um valor para a posicao [%d][%d] da matriz.\n", i, j);
			scanf("%f", &matrix[i][j]);
		}	
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(matrix[i][j] >= maior){
				maior = matrix[i][j];
			}
		}
	}
	
	printf("O maior valor da matriz eh: %.2f.", maior);
	
	return 0;
}
