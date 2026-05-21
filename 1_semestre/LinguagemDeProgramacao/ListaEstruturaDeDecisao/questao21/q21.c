/*
Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média.
1. Aritmética
2. Ponderada (3,3,4)
3. Harmônica
*/

#include <stdio.h>
#include <string.h>

int main(){
    float n1, n2, n3, media;
    int selection;
    char mediaName[12];

    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &n3);

    printf("Escolha qual media voce deseja calcular:\n");
    printf("1. Aritmetica\n");
    printf("2. Ponderada (3,3,4)\n");
    printf("3. Harmonica\n");
    scanf("%d", &selection);

    switch (selection)
    {
    case 1:
        strcpy(mediaName, "Aritmetica");
        media = (n1 + n2 + n3) / 3.;
        break;
    case 2:
        strcpy(mediaName, "Ponderada");
        media = (n1 * 3. + n2 * 3. + n3 * 4.) / 10.;
        break;
    case 3:
        strcpy(mediaName, "Harmonica");
        media = 3. / (1./n1 + 1./n2 + 1./n3);
        break;
    default:
        printf("Ocorreu algum erro.\n");
        return 1;
        break;
    }

    printf("A Media %s eh: %.2f\n", mediaName, media);

    return 0;
}