#include <stdio.h>

int main() {

    int i;
    int num[10];
    int maior = 0;
    int menor = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero para o vetor %d: ", i);
        scanf("%d", &num[i]);

        if(i == 0) {
            maior = num[0];
            menor = num[0];
        }
        else {
            if(num[i] < menor) {
                menor = num[i];
            }

            if(num[i] > maior) {
                maior = num[i];
            }
        }
    }

    printf("\nOs numeros digitados no vetor foram:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    printf("O maior numero do vetor e: %d\n", maior);
    printf("O menor numero do vetor e: %d\n", menor);

    return 0;
}
