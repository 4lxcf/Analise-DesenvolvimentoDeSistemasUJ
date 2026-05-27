#include <stdio.h>

void parOuImpar(int a);

int main(){
    int n1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);

    parOuImpar(n1);

    return 0;
}

void parOuImpar(a){
    if (a % 2 == 0)
    {
        printf("O numero eh PAR!\n");
    } else {
        printf("O numero eh IMPAR!\n");
    }
    
}