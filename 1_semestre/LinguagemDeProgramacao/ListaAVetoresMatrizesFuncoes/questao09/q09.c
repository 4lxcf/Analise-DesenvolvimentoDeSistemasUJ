#include <stdio.h>

int main()
{
    int vec[12], pares = 0;

    for (int i = 0; i < 12; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %d", &vec[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        if (vec[i] % 2 == 0)
        {
            pares++;
        }
    }
    
    printf("Quantidade de numeros pares: %d", pares);

    return 0;
}
