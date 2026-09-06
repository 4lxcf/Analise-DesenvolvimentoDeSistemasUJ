#include <stdio.h>

float dobro(float a);
float triplo(float a);
void mostrarResultado(float a, float b);

int main(){
    float n1;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    dobro(n1);
    triplo(n1);
    mostrarResultado(dobro(n1), triplo(n1));

    return 0;
}

float dobro(float a){
    return a * a;
}

float triplo(float a){
    return a * a * a;
}

void mostrarResultado(float a, float b){
    printf("O Dobro do seu numero: %.2f\n", a);
    printf("O Triplo do seu numero: %.2f\n", b);
}
