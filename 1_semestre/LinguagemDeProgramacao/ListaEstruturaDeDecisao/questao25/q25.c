/*
Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e escrever a área deste triângulo. Se LÓGICA DE PROGRAMAÇÃO - LINGUAGEM C não formam triângulo escrever os valores lidos. ( se a > b + c não formam triângulo algum, se a é o maior).
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float semi, area;

    printf("Digite o valor do primeiro lado:\n");
    scanf("%d", &a);
    printf("Digite o valor do segundo lado:\n");
    scanf("%d", &b);
    printf("Digite o valor do terceiro lado:\n");
    scanf("%d", &c);

    if (a > (b + c) || b > (a + c) || c > (a + b))
    {
        printf("Impossivel formar um triangulo com valores de lados: %d | %d | %d.\n", a, b, c);
        return 1;
    }

    semi = (a + b + c) / 2.;

    area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
    
    printf("Area do Triangulo: %.2f\n", area);

    return 0;
}