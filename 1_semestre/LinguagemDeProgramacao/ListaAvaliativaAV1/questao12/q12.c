#include <stdio.h>
#include <stdlib.h>

void ordenar(int v[], int n){
    int next, aux;

    for (int i = 0; i < n - 1; i++){
        next = v[i+1];
        if (v[i] > next){
            aux = v[i];
            v[i] = next;
            v[i+1] = aux;
        }
    }
}

int buscaBinaria(int v[], int n, int chave){
    return 0;
}

int main(){
    int qtd;

    printf("Digite quantos valores serao utilizados no vetor (1~50).\n");
    scanf("%d", &qtd);

    if (qtd < 1 || qtd > 50){
        printf("Quantidade invalida!\n");
        return 1;
    }

    int *vet = malloc(qtd * sizeof(int));

    if (vet == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    
    // Preencher o vetor
    for (int i = 0; i < qtd; i++){
        printf("Digite o valor [%d] do vetor.\n", i + 1);
        scanf("%d", &vet[i]);
    }

    //Mostrar o vetor digitado
    printf("Vetor Digitado = [ ");
    for (int i = 0; i < qtd; i++){
        if (i == (qtd - 1)){
            printf("%d", vet[i]);
        } else {
            printf("%d, ", vet[i]);
        }
    }
    printf(" ]\n");

    ordenar(vet, qtd);

    //Mostrar o vetor ordenado
    printf("Vetor Ordenado = [ ");
    for (int i = 0; i < qtd; i++){
        if (i == (qtd - 1)){
            printf("%d", vet[i]);
        } else {
            printf("%d, ", vet[i]);
        }
    }
    printf(" ]\n");

    return 0;
}