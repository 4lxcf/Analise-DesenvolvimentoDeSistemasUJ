#include <stdio.h>

float calculoIMC(float massa, float altura);
void classificacao(float a);

int main(){
    float n1, n2;

    printf("Digite a massa (kg):\n");
    scanf("%f", &n1);
    printf("Digite a altura (cm):\n");
    scanf("%f", &n2);

    if (n1 <= 0 || n2 <= 0)
    {
        printf("Valores invalidos.\n");
        return 1;
    }

    calculoIMC(n1, n2);
    classificacao(calculoIMC(n1, n2));

    return 0;
}

float calculoIMC(float massa, float altura){
    return massa / (altura * altura);
}

void classificacao(float a){
    if (a <= 18.5)
    {
        printf("Abaixo do peso");
    } else if (a <= 24.9)
    {
        printf("Peso normal");
    } else if (a <= 29.9)
    {
        printf("Sobrepeso");
    } else {
        printf("Obesidade");
    }

}