#include <stdio.h>

float volumeCaixa(float comprimento, float largura, float altura);

int main(){
    float n1, n2, n3;

    printf("Digite o COMPRIMENTO da Caixa:\n");
    scanf("%f", &n1);
    printf("Digite a LARGURA da Caixa:\n");
    scanf("%f", &n2);
    printf("Digite a ALTURA da Caixa:\n");
    scanf("%f", &n3);
    
    printf("Resultado: %.2f", volumeCaixa(n1, n2, n3));

    return 0;
}

float volumeCaixa(float comprimento, float largura, float altura){
    return comprimento * largura * altura;
}
