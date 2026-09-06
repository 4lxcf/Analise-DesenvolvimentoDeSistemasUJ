#include <stdio.h>

int mdc (int a , int b ){

    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

int mmc (int a , int b ){

    if(a== 0 || b==0){
        return 0;
    }

    return (a * b) / mdc(a, b);
}

int main(){

    int valor1, valor2;
    int MDC, MMC    ;

    printf("Digite o primeiro valor para calcular o MDC E MCC: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &valor2);

    MDC= mdc(valor1, valor2);
    MMC= mmc(valor1, valor2);

    printf("O valor do MDC entre os numeros e de: %d\nE o valor de MMC e de: %d\n", MDC, MMC);

    return 0;
}
