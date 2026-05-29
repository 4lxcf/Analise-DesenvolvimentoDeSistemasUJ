#include <stdio.h>

float soma(float a, float b);
float subt(float a, float b);
float multi(float a, float b);
float divi(float a, float b);

int main(){
    int choice;
    float n1, n2, result;

    printf("===CALCULADORA===\n");
    printf("Digite o valor do primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o valor do segundo numero:\n");
    scanf("%f", &n2);
    printf("Agora escolha abaixo qual opcao deseja utilizar.\n");
    printf("1. SOMA\n");
    printf("2. SUBTRACAO\n");
    printf("3. MULTIPLICACAO\n");
    printf("4. DIVISAO\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = soma(n1, n2);
        break;
    case 2:
        result = subt(n1, n2);
        break;
    case 3:
        result = multi(n1, n2);
        break;
    case 4:
        if (n2 == 0)
        {
            printf("Erro: Voce tentou calcular uma divisao por 0.");
            return 1;
        }
        result = divi(n1, n2);
        break;
    default:
        printf("Valor digitado invalido.\n");
        return 1;
    }

    printf("O resultado da operacao escolhida eh: %.2f", result);

    return 0;
}

float soma(float a, float b){
    return a + b;
}

float subt(float a, float b){
    return a - b;
}

float multi(float a, float b){
    return a * b;
}

float divi(float a, float b){
    return a / b;
}