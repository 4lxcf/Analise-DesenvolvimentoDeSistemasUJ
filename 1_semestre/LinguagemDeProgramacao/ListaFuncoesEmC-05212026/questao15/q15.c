#include <stdio.h>

void metrosParaCentimetros(float m);
void centimetrosParaMetros(float cm);

int main(){
    float n1;
    int choice;

    printf("Escolha o metodo desejado:\n");
    printf("1. Transformar METROS para CENTIMETROS:\n");
    printf("2. Transformar CENTIMETROS para METROS:\n");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("Valor invalido.\n");
        return 1;
    }

    if (choice == 1)
    {
        printf("Digite o valor em metros:\n");
        scanf("%f", &n1);
        metrosParaCentimetros(n1);
    } else {
        printf("Digite o valor em centimetros:\n");
        scanf("%f", &n1);
        centimetrosParaMetros(n1);
    }

    return 0;
}

void metrosParaCentimetros(float m){
    printf("%.2fm => %.2fcm.\n", m, m * 100);
}

void centimetrosParaMetros(float cm){
    printf("%.2fcm => %.2fm.\n", cm, cm / 100);
}