#include<stdio.h>

float calcularmedia(float notas[], int tamanho){
  float media;
  float soma = 0.0;

  for(int i=0; i<tamanho; i++){
    soma += notas[i];
  }

  media = soma / tamanho;

  return media;
}

int main(){
  float alunos[8];
  int total = 8;
  float mediaturma = 0.0;
  int igualemaior = 0;
  int aprovado = 0;
  float porcentagem;

  for(int i=0; i<total; i++){
    printf("Digite a nota do aluno: \n");
    scanf("%f",&alunos[i]);

    if(alunos[i]>=7.0){
      aprovado++;
    }
  }

  mediaturma= calcularmedia(alunos, total);
  porcentagem=((float)aprovado/total)*100;

  for(int i=0; i<total; i++){
    if(alunos[i]>=mediaturma){
      igualemaior++;
    }
  }

  printf("A média da turma e de: %.2f\n", mediaturma);
  printf("A quantidade de alunos aprovados foram de: %d\n", aprovado );
  printf("A quantidade de alunos que obtiveram notas iguais e/ou maior que a media da turma foram de: %d\n", igualemaior);
  printf("A porcentagem de alunos aprovados foi de: %.2f %% \n", porcentagem);

  return 0;
}