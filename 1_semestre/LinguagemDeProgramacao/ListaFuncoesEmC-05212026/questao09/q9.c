#include <stdio.h>

float areaRetangulo(float b, float h);

int main(){
    float n1, n2;

    printf("Digite a BASE do Retangulo:\n");
    scanf("%f", &n1);
    printf("Digite a ALTURA do Retangulo:\n");
    scanf("%f", &n2);
    
    printf("Resultado: %.2f", areaRetangulo(n1, n2));

    return 0;
}

float areaRetangulo(float b, float h){
    return b * h;
}
