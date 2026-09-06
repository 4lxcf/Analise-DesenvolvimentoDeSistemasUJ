#include <stdio.h>

float salarioBruto();
float descontos();
float salarioLiquido(float salarioBruto, float desconto);

int main(){
    float bruto = salarioBruto();
    float desconto = descontos();

    salarioLiquido(bruto, desconto);

    return 0;
}

float salarioBruto(){
    int horasTrabalhadas;
    float valorHora;

    printf("Digite a quantidade de horas trabalhadas:\n");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o valor da hora:\n");
    scanf(" %f", &valorHora);
    return horasTrabalhadas * valorHora;
}

float descontos(){
    float valor;

    printf("Digite o valor para ser descontado do salario (%%):\n");
    scanf(" %f", &valor);
    return valor;
}

float salarioLiquido(float salarioBruto, float desconto){
    float result = salarioBruto - (salarioBruto * desconto / 100);

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto: %.2f%%\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", result);
    return result;
}