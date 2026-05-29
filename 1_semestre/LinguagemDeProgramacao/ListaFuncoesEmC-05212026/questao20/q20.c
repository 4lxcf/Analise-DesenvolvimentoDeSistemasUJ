#include <stdio.h>

float consumoMedio(float distPercorrida, float combustivelGasto);

int main(){
    float dp, cg;

    printf("Digite a Distancia Total Percorrida (km):\n");
    scanf("%f", &dp);
    printf("Digite o Combustivel Gasto (L):\n");
    scanf("%f", &cg);

    consumoMedio(dp, cg);

    return 0;
}

float consumoMedio(float distPercorrida, float combustivelGasto){
    float result = distPercorrida / combustivelGasto;

    printf("Consumo Medio: %.2fkm/L\n", result);
    return result;
}