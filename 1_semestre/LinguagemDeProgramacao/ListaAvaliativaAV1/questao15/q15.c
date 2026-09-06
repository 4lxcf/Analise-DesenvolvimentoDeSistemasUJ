#include <stdio.h>

//DECLARACAO DAS FUNCOES
void calcularMediaMaquinas(int producao[20][30], int numMaquinas, int numDias, float medias[20]);
void calcularMediaDias(int producao[20][30], int numMaquinas, int numDias, float medias[30]);
void ordenarRanking(float medias[20], int indices[20], int numMaquinas);

//MAIN
int main(){
    int maquinas, dias, melhorMaquina, producao[20][30], ponteiros[20];
    float mediasMaquinas[20], mediasDias[30];

    printf("Digite quantas maquinas o sistema tem (1~20):\n");
    scanf("%d", &maquinas);
    printf("Foram quantos dias de producao nesse mes? (1~30)\n");
    scanf(" %d", &dias);

    if (maquinas <= 0 || maquinas > 20 || dias <= 0 || dias > 30){
        printf("Valores digitados estao incorretos!");
        return -1;
    }

    //Preencher com os valores da producao
    for (int i = 0; i < maquinas; i++){
        for (int j = 0; j < dias; j++){
            printf("Digite quanto a maquina%d produziu no dia %d:\n", i, j+1);
            scanf("%d", &producao[i][j]);
        }
    }

    calcularMediaMaquinas(producao, maquinas, dias, mediasMaquinas);    
    calcularMediaDias(producao, maquinas, dias, mediasDias);
    ordenarRanking(mediasMaquinas, ponteiros, maquinas);
    
    printf("=== Ranking de Producao ===\n");
    for (int i = 0; i < maquinas; i++){
        if (i == 0){
            printf("%d- maquina%d *CAMPEA DE PRODUCAO*\n", i + 1, ponteiros[i]);
        } else {
            printf("%d- maquina%d\n", i + 1, ponteiros[i]);
        }
    }

    return 0;
};

//FUNCOES
void calcularMediaMaquinas(int producao[20][30], int numMaquinas, int numDias, float medias[20]){
    for (int i = 0; i < numMaquinas; i++){
        medias[i] = 0.;
        printf(">Maquina%d:\n", i);
        for (int j = 0; j < numDias; j++){
            printf(" Dia%d[%d]", j+1, producao[i][j]);
            medias[i] += producao[i][j];
        }
        medias[i] = medias[i] / numDias;
        printf("\n");
        printf(" ProducaoMedia[%.1f]\n", medias[i]);
    }
    printf("---\n");
};

void calcularMediaDias(int producao[20][30], int numMaquinas, int numDias, float medias[30]){
    for (int j = 0; j < numDias; j++){
        medias[j] = 0.;
        printf(">Media de Producao do Dia%d: ", j+1);
        for (int i = 0; i < numMaquinas; i++){
            medias[j] += producao[i][j];
        }
        medias[j] = medias[j] / numMaquinas; 
        printf("[%.1f]\n", medias[j]);
    }
    printf("---\n");
};

void ordenarRanking(float medias[20], int indices[20], int numMaquinas){
    float aux;
    int auxIndice;

    for (int i = 0; i < numMaquinas; i++)
    {
        indices[i] = i;
    }

    for (int i = 0; i < numMaquinas - 1; i++){
        for (int j = 0; j < (numMaquinas - i - 1); j++){
            if (medias[j] < medias[j + 1]){
                //Troca de posição do valor
                aux = medias[j];
                medias[j] = medias[j + 1];
                medias[j + 1] = aux;

                //Troca de posicao do ponteiro
                auxIndice = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = auxIndice;
            }
        }
    }
};
