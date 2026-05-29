#include <stdio.h>

int mes(int a);
int dia(int a);

int main(){
    int n1, result;

    printf("Digite a idade da pessoa:\n");
    scanf("%d", &n1);

    mes(n1);
    dia(n1);

    return 0;
}

int mes(int anos){
    int result = 12 * anos;

    printf("%d anos equivale a %d meses.\n", anos, result);
    return result; 
}

int dia(int anos){
    int result = 365 * anos;

    printf("%d anos equivale a %d dias.\n", anos, result);
    return result;
}