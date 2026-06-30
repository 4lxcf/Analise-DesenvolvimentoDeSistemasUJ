#include<stdio.h>
#include<stdlib.h>

int main(){
int M[4][4];
int par=0;
int soma=0;

for(int i=0;i<4;i++){
   for(int j=0; j<4; j++){
   printf("Digite o numero da linha %d e coluna %d\n",i,j);
   scanf("%d",&M[i][j]);
   
   if(M[i][j]%2==0){
   par++;
   }
   if(i==j){
   soma+=M[i][j];
   }
   }
   }
   printf("A soma da diagonal principal e de: %d\n",soma);
   printf("A quantidade de numeros pares na matriz e de: %d\n", par);
   return 0;
}