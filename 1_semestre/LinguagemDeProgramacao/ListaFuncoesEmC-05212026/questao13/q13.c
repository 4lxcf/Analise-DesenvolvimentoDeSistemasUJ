#include <stdio.h>

float media(float a, float b);
void aprovacao(float a);

int main(){
    float n1, n2;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("Valores de notas invalidos.\n");
        return 1;
    }

    media(n1, n2);
    aprovacao(media(n1, n2));

    return 0;
}

float media(float a, float b){
    return (a + b) / 2;
}

void aprovacao(float a){
    if (a >= 7)
    {
        printf("Este aluno foi APROVADO.\n");
    } else {
        printf("Este aluno foi REPROVADO.\n");
    }

}