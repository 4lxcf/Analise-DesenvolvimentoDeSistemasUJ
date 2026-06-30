#include <stdio.h>

int verificarSimetria(int matriz[][5], int ordem);

int main() {
    int m[5][5];
    int i, j;
    int n=5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o elemento %dx%d da matriz:\n", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    if (verificarSimetria(m, n) == 1) {
        printf("\nA matriz e SIMETRICA.\n");
    } else {
        printf("\nA matriz NAO E simetrica.\n");
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
