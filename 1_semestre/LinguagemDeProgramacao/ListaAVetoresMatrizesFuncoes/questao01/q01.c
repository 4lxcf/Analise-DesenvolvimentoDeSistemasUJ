#include <stdio.h>

int main()
{
    int vec[10], result;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %d", &vec[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        result += vec[i];
    }
    
    printf("A soma dos valores eh: %d", result);

    return 0;
}
