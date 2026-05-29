#include <stdio.h>

float quadrado(float a);

int main(){
    float n1;

    printf("Digite um numero real:\n");
    scanf("%f", &n1);

    printf("Resultado: %.2f", quadrado(n1));

    return 0;
}

float quadrado(float a){
    return a * a;
}
