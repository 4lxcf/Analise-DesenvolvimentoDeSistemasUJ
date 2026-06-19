#include <stdio.h>

int soma(int v[], int n);

int main(){
	int qtd_elementos;
	
	printf("Digite a quantidade de elementos.\n");
	scanf("%d", &qtd_elementos);
	
	int vec[qtd_elementos];
	
	for(int i = 0; i < qtd_elementos; i++){
		printf("Digite um valor para o vetor.\n");
		scanf("%d", &vec[i]);
	}
	
	printf("A soma dos valores: %d", soma(vec, qtd_elementos));
	
	return 0;
}

int soma(int v[], int n){
	int soma = 0;
	
	for(int i = 0; i < n; i++){
		soma += v[i];
	}
	
	return soma;
}
