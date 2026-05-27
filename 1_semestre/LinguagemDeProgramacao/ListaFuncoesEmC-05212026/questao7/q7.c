#include <stdio.h>

float mediaPonderada(float nota1, float peso1, float nota2,float peso2);

int main(){
    float n1, n2, p1, p2;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota:\n");
    scanf("%f", &p1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota:\n");
    scanf("%f", &p2);
    

    printf("Resultado: %.1f", mediaPonderada(n1, p1, n2, p2));

    return 0;
}

float mediaPonderada(float nota1, float peso1, float nota2, float peso2){
    return (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
}
