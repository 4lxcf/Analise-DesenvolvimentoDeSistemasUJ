#include <stdio.h>

int verificarSimetria(int matriz[][5], int ordem);

int main() {
    int M[5][5];
    int i, j;
    int n=5;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite os elementos da matriz %dx%d:\n", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    if (verificarSimetria(M, n)) {
        printf("\nA matriz é SIMÉTRICA.\n");
    } else {
        printf("\nA matriz NÃO é simétrica.\n");
    }
    return 0;
}

int verificarSimetria(int matriz[][5], int ordem) {
    int i, j;
    int simetrica = 1;

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
            }
        }
    }

    return simetrica;
}
