#include <stdio.h>

int main()
{
    int vec[8], maior = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %d", &vec[i]);
    }

    printf("Numeros digitados inversamente: ");

    for (int i = 7; i >= 0; i--)
    {
        printf(" %d", vec[i]);
    }

    return 0;
}
