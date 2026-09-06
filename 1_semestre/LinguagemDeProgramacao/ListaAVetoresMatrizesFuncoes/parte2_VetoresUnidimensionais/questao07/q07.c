#include <stdio.h>

int main()
{
    int vec[15], maior = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %d", &vec[i]);
               
		if(vec[i] >= maior){
        	maior = vec[i];
		}
    }
    
    printf("O maior valor digitado foi: %d", maior);

    return 0;
}
