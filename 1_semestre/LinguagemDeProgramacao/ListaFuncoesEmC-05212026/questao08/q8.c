#include <stdio.h>

float celsiusParaFahrenheit(float temp);

int main(){
    float n1;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &n1);
    
    printf("Resultado: %.1f", celsiusParaFahrenheit(n1));

    return 0;
}

float celsiusParaFahrenheit(float temp){
    return (9 * temp / 5) + 32;
}
