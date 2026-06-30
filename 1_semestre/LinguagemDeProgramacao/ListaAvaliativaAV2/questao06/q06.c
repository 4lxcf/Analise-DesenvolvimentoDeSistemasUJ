#include <stdio.h>

float calcularMediaRegiao(float temperaturas[][4], int regiao);
float calcularMediaGeral(float temperaturas[][4]);

int main(){
    float matrix[5][4], mediaRegiao0, mediaRegiao1, mediaRegiao2, mediaRegiao3, mediaGeral, maiorTemp[3], menorTemp[3];
    int diaDaSemana, regiao;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite o valor da temperatura.\n");
            scanf("%f", &matrix[i][j]);
        }
    }

    /* Visulização dos valores na matriz */
    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < 4; j++){
    //         printf("[%.2f]", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    /* Registro de Maior e Menor temperatura */
    maiorTemp[0] = -10000; // Reset da primeira posição do vetor
    menorTemp[0] = 10000; // Reset da primeira posição do vetor

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if (matrix[i][j] > maiorTemp[0]){
                maiorTemp[0] = matrix[i][j];
                maiorTemp[1] = i;
                maiorTemp[2] = j;
            }

            if (matrix[i][j] < menorTemp[0]){
                menorTemp[0] = matrix[i][j];
                menorTemp[1] = i;
                menorTemp[2] = j;
            }
            
        }
    }

    mediaRegiao0 = calcularMediaRegiao(matrix, 0);
    mediaRegiao1 = calcularMediaRegiao(matrix, 1);
    mediaRegiao2 = calcularMediaRegiao(matrix, 2);
    mediaRegiao3 = calcularMediaRegiao(matrix, 3);
    mediaGeral = calcularMediaGeral(matrix);

    printf("mediaRegiao0: %.2f C ", mediaRegiao0);
    if (mediaRegiao0 > mediaGeral){
        printf("(Acima da Media Geral.)\n");
    } else {
        printf("\n");
    }
    printf("mediaRegiao1: %.2f C ", mediaRegiao1);
    if (mediaRegiao1 > mediaGeral){
        printf("(Acima da Media Geral.)\n");
    } else {
        printf("\n");
    }
    printf("mediaRegiao2: %.2f C ", mediaRegiao2);
    if (mediaRegiao2 > mediaGeral){
        printf("(Acima da Media Geral.)\n");
    } else {
        printf("\n");
    }
    printf("mediaRegiao3: %.2f C ", mediaRegiao3);
    if (mediaRegiao3 > mediaGeral){
        printf("(Acima da Media Geral.)\n");
    } else {
        printf("\n");
    }
    printf("mediaGeral: %.2f C\n", mediaGeral);

    // Coloquei +1 nos valores de Dias porque não existe Dia 0.
    printf("A Maior Temperatura Registrada: %.2f C. Foi no Dia %.f na Regiao %.f \n", maiorTemp[0], maiorTemp[1]+1, maiorTemp[2]);
    printf("A Menor Temperatura Registrada: %.2f C. Foi no Dia %.f na Regiao %.f \n", menorTemp[0], menorTemp[1]+1, menorTemp[2]);
};

float calcularMediaRegiao(float temperaturas[][4], int regiao){
    float media = 0;

    for (int i = 0; i < 5; i++){
        media += temperaturas[i][regiao];
        //printf("%.2f", media);
    }

    media = media / 5;
    return media;
};

float calcularMediaGeral(float temperaturas[][4]){
    float media = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            media += temperaturas[i][j];
        }
    }

    media = media / 20;
    return media;
};