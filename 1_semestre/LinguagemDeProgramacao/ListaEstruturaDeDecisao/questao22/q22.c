/*
Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:
Código do Produto | Preço unitário 
1001 | 5,32
1324 | 6,45
6548 | 2,37 
0987 | 5,32 
7623 | 6,45
*/

#include <stdio.h>
#include <string.h>

int main(){
    int qty;
    float totalPrice;
    char productCode[5];

    printf("Digite o codigo do produto comprado:\n");
    printf("|Codigo do Produto | Preco unitario|\n");
    printf("|1001.......................R$ 5,32|\n");
    printf("|1324.......................R$ 6,45|\n");
    printf("|6548.......................R$ 2,37|\n");
    printf("|0987.......................R$ 5,32|\n");
    printf("|7623.......................R$ 6,45|\n");
    scanf("%s", productCode);
    printf("Digite a quantidade comprada deste item:\n");
    scanf("%d", &qty);

    if (strcmp(productCode, "1001") == 0 || strcmp(productCode, "0987") == 0)
    {
        totalPrice = qty * 5.32;
    } else if (strcmp(productCode, "1324") == 0 || strcmp(productCode, "7623") == 0)
    {
        totalPrice = qty * 6.45;
    } else if (strcmp(productCode, "6548") == 0)
    {
        totalPrice = qty * 2.37;
    } else {
        printf("Ocorreu um erro. Codigo invalido.\n");
        return 1;
    }

    printf("Preco Total: R$ %.2f\n", totalPrice);

    return 0;
}