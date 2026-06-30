#include <stdio.h>

int main(){
	int matrix[4][4], pares = 0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("Digite um valor para a posicao [%d][%d] da matriz.\n", i, j);
			scanf("%d", &matrix[i][j]);
		}	
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(matrix[i][j] % 2 == 0){
				pares++;
			}
		}
	}
	
	printf("Nessa matriz tem %d numeros pares", pares);
	
	return 0;
}
