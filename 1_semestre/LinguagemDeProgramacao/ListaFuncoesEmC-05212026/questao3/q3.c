#include <stdio.h>

int maiorNumero(int a, int b);

int main(){
    int n1, n2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    printf("O maior numero digitado foi: %d\n", maiorNumero(n1, n2));

    return 0;
}

int maiorNumero(a, b){
    if (a >= b)
    {
        return a;
    } else {
        return b;
    }
    
}