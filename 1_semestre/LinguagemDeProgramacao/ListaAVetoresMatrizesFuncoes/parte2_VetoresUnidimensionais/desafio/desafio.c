#include <stdio.h>

int main()
{
    float alunos[20], media = 0., maior = 0., menor = 10.;
    int aprovados = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a nota do aluno: \n");
        scanf(" %f", &alunos[i]);

        if (alunos[i] < 0. || alunos[i] > 10.)
        {
            printf("Valores de nota inválidos.\n");
            return 1;
        }

        media += alunos[i];
        
    }

    for (int i = 0; i < 20; i++)
    {
        if (alunos[i] >= maior)
        {
            maior = alunos[i];
        }

        if (alunos[i] <= menor)
        {
            menor = alunos[i];
        }
    }
    
    printf("A média da turma foi: %.2f!\n", media);
    printf("A maior nota da turma: %.2f.\n", maior);
    printf("A menor nota da turma: %.2f.\n", menor);

    return 0;
}
