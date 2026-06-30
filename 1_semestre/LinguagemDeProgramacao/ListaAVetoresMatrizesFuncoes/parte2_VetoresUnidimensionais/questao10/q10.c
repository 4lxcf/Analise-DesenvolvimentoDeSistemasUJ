#include <stdio.h>

int main()
{
    int vec[10], newNumber;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %d", &vec[i]);
    }

    printf("Digite um novo numero: \n");
    scanf(" %d", &newNumber);

    for (int i = 0; i < 10; i++)
    {
        if (newNumber == vec[i])
        {
            printf("Esse valor esta no vetor!");
            return 1;
        }
    }
    
    printf("Esse valor NAO esta no vetor!");
    return 0;
}