#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

float area(float a);
float peri(float a);

int main(){
    int choice;
    float n1, result;

    printf("Digite o valor do raio:\n");
    scanf("%f", &n1);
    printf("Agora escolha abaixo qual opcao deseja utilizar.\n");
    printf("1. AREA\n");
    printf("2. PERIMETRO\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = area(n1);
        break;
    case 2:
        result = peri(n1);
        break;
    default:
        printf("Valor digitado invalido.\n");
        return 1;
    }

    printf("O resultado da operacao escolhida eh: %.2f", result);

    return 0;
}

float area(float r){
    return M_PI * r * r; 
}

float peri(float r){
    return 2 * M_PI * r;
}