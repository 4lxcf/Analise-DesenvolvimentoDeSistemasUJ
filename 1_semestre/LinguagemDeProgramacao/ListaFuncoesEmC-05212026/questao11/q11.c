#include <stdio.h>

void lerNumeros(float* a, float* b);
float somar(float a, float b);
void mostrarResultado(float a);

int main(){
    float n1, n2, result;

    lerNumeros(&n1, &n2);
    result = somar(n1, n2);
    mostrarResultado(result);

    return 0;
}

void lerNumeros(float* a, float* b){
    printf("Digite o primeiro numero:\n");
    scanf("%f", a);
    printf("Digite o segundo numero:\n");
    scanf("%f", b);
}

float somar(float a, float b){
    return a + b;
}

void mostrarResultado(float a){
    printf("Resultado: %.2f\n", a);
}
