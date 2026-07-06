#include <stdio.h>
#include <stdlib.h>

void ordenar(int v[], int n){
    int next, aux;
    int ordered = 0;

    while (ordered < (n - 1)){
        ordered = 0;
        //Ordenação do vetor
        for (int i = 0; i < n - 1; i++){
            next = v[i+1];
            if (v[i] > next){
                aux = v[i];
                v[i] = next;
                v[i+1] = aux;
            } else {
                ordered++;
            }
        }
    }
}

int buscaBinaria(int v[], int n, int chave){
    int inicio = 0, fim = n - 1;

    while (inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;

        if (v[meio] == chave){
            return meio;
        } else if (v[meio] > chave){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
        
    }    
    
    return -1;
}

int main(){
    int qtd, chave, pos;

    printf("Digite quantos valores serao utilizados no vetor (1~50).\n");
    scanf("%d", &qtd);

    if (qtd < 1 || qtd > 50){
        printf("Quantidade invalida!\n");
        return 1;
    }
    
    //Alocacao de memoria variavel
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

    free(vet);

    ordenar(vet, qtd);

    //Mostrar o vetor ordenado
    printf("Bubble Sort = [ ");
    for (int i = 0; i < qtd; i++){
        if (i == (qtd - 1)){
            printf("%d", vet[i]);
        } else {
            printf("%d, ", vet[i]);
        }
    }
    printf(" ]\n");

    printf("Agora digite o valor que deseja buscar:\n");
    scanf("%d", &chave);

    pos = buscaBinaria(vet, qtd, chave);

    if (pos == -1){
        printf("Numero nao encontrado.");
        return -1;
    }

    printf("O numero >%d< foi encontrado na posicao [%d] do vetor.", chave, pos);
    return 0;
}