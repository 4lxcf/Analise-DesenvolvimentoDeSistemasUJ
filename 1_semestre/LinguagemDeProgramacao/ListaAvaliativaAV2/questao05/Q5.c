#include <stdio.h>
#include <math.h>

float soma(float a, float b){
return a + b;
}
float subtracao(float a, float b){
return a-b;
}
float multiplicacao(float a, float b){
return a*b;
}
float divisao(float a, float b){
return a/b;
}
float potencia(float base, float expoente){
return pow(base, expoente);
}



int main(){

float num1, num2, resultado;
int menu;

printf("==============CALCULADORA==============\n");

printf("Digite o primeiro numero para calcular: \n");
scanf("%f", &num1);
printf("Digite o segundo numero para calcular: \n");
scanf("%f", &num2);

while(1){
printf("\nEscolha a operacao matematica que deseja realizar: \n");
printf("\n 1-Soma\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n 5-Potenciacao\n 0-Sair\n Opcao: ");
scanf("%d", &menu);

switch(menu){

case 0:
    printf("\nSaindo da Calculadora");
    return 0;
case 1:
    resultado= soma(num1,num2);
    printf("\nA soma dos numeros e de: %.2f\n", resultado);
    break;
case 2:
    resultado= subtracao(num1, num2);
    printf("\nA subtracao dos numeros e de: %.2f\n", resultado);
    break;
case 3:
    resultado= multiplicacao(num1, num2);
    printf("\nA multiplicacao dos numeros e de: %.2f\n", resultado);
    break;
case 4:
    if(num2 == 0) {
    printf("\nErro: Nao e possivel dividir por zero!\n");
    }
    else{
    resultado= divisao(num1, num2);
    printf("\nA divisao dos numeros e de: %.2f\n", resultado);
    }
    break;
case 5:
    resultado= potencia(num1, num2);
    printf("\nA potenciacao dos numeros e de: %.2f\n", resultado);
    break;


default:
    printf("\nOpcao invalida\n");
    break;
}

}
return 0;
}

