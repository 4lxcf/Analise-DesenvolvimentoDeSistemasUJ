/*
Um vendedor precisa de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostre uma mensagem no caso de código inválido.
Código | Preço unitário
'ABCD' | R$ 5,30
'XYPK' | R$ 6,00
'KLMP' | R$ 3,20
'QRST' | R$ 2,50
*/

#include <stdio.h>
#include <string.h>

int main(){
    int qty;
    float totalPrice;
    char productCode[5];

    printf("Digite o codigo do produto comprado:\n");
    printf("|Codigo do Produto | Preco unitario|\n");
    printf("|ABCD.......................R$ 5,30|\n");
    printf("|XYPK.......................R$ 6,00|\n");
    printf("|KLMP.......................R$ 3,20|\n");
    printf("|QRST.......................R$ 2,50|\n");
    scanf("%s", productCode);
    printf("Digite a quantidade comprada deste item:\n");
    scanf("%d", &qty);

    if (strcmp(productCode, "ABCD") == 0)
    {
        totalPrice = qty * 5.30;
    } else if (strcmp(productCode, "XYPK") == 0)
    {
        totalPrice = qty * 6.00;
    } else if (strcmp(productCode, "KLMP") == 0)
    {
        totalPrice = qty * 3.20;
    } else if (strcmp(productCode, "QRST") == 0)
    {
        totalPrice = qty * 2.50;
    } else {
        printf("Ocorreu um erro. Codigo invalido.\n");
        return 1;
    }

    printf("Preco Total: R$ %.2f\n", totalPrice);

    return 0;
}