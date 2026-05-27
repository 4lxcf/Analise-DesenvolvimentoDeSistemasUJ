#include <stdio.h>

int soma(int a, int b);

int main(){
    int n1, n2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    printf("O resultado da funcao Soma: %d\n", soma(n1, n2));

    return 0;
}

int soma(a, b){
    return a + b;
}