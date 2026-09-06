#include <stdio.h>

void multiplicarMatrizes(int a[10][10], int b[10][10], int resultado[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void extrairDiagonal(int m[10][10], int diagonal[10], int n) {
    for (int i = 0; i < n; i++) {
        diagonal[i] = m[i][i];
    }
}

long produtoVetor(int v[], int n) {
    // se o vetor s� tem 1 elemento (ou tamanho chegou a 0 de forma segura)
    if (n <= 0) {
        return 1;
    }

    //multiplica o �ltimo elemento pelo produto do restante do vetor
    return v[n - 1] * produtoVetor(v, n - 1);
}

int main() {
    int n;
    int Ma[10][10], Mb[10][10], Mc[10][10];
    int diagonal[10];
    long resultadoProduto;

    // Limitador da Matiz
    printf("Digite a dimensao desejada das matrizes quadradas (Limite de 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("A dimensao deve estar entre 1 e 10.\n");
        return 1;
    }

    // Leitura da Primeira Matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nDigite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &Ma[i][j]);
        }
    }

    // Leitura da Segunda Matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nDigite o valor de B[%d][%d]: ", i, j);
            scanf("%d", &Mb[i][j]);
        }
    }

    //Processamento
    multiplicarMatrizes(Ma, Mb, Mc, n);
    extrairDiagonal(Mc, diagonal, n);
    resultadoProduto = produtoVetor(diagonal, n);

    // Exibi��o da Matriz C (Resultado)
    printf("\nRESULTADO C (A x B)\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", Mc[i][j]);
        }
        printf("\n");
    }

    // Exibi��o do vetor da diagonal principal
    printf("\nVETOR DA DIAGONAL PRINCIPAL DE C\n[");

    for (int i = 0; i < n; i++) {
        printf("%d", diagonal[i]);
        if (i < n - 1) printf(" ");
    }

    printf("]\n");

    // Exibi��o do produto acumulado da diagonal
    printf("\nPRODUTO DOS ELEMENTOS DA DIAGONAL\n");
    printf("Resultado: %ld\n", resultadoProduto);
    return 0;
}
