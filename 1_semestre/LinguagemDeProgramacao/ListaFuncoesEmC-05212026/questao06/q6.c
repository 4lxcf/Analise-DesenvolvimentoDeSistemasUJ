#include <stdio.h>

float media(float a, float b, float c);

int main(){
    float n1, n2, n3;

    printf("Digite o primeiro numero real:\n");
    scanf("%f", &n1);
    printf("Digite o segundo numero real:\n");
    scanf("%f", &n2);
    printf("Digite o terceiro numero real:\n");
    scanf("%f", &n3);

    printf("Resultado: %.2f", media(n1, n2, n3));

    return 0;
}

float media(float a, float b, float c){
    return (a + b + c) / 3.;
}
