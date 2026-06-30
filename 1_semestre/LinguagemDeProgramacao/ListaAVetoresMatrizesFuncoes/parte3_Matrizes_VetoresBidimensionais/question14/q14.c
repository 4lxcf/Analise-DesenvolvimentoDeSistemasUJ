#include <stdio.h>

int main(){
	float matrix[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, somaDiagonalPrincipal = 0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(i==j){
				somaDiagonalPrincipal += matrix[i][j];
			}
		}
	}
	
	printf("Soma da Diagonal Principal: %.2f.", somaDiagonalPrincipal);
	
	return 0;
}
