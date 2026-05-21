/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
Código | Cargo      | Percentual 
101    | Gerente    | 10% 
102    | Engenheiro | 20% 
103    | Técnico    | 30%
*/

#include <stdio.h>
#include <string.h>

int main(){
    float actualSalary, newSalary, percent;
    char jobTitle[12];

    printf("Digite o salario atual do funcionario:\n");
    scanf("%f", &actualSalary);
    printf("Digite o cargo do funcionario:\n");
    scanf("%s", jobTitle);

    if (strcmp(jobTitle, "gerente") == 0)
    {
        percent = 0.1;
    } else if (strcmp(jobTitle, "engenheiro") == 0)
    {
        percent = 0.2;
    } else if (strcmp(jobTitle, "tecnico") == 0)
    {
        percent = 0.3;
    } else {
        percent = 0.4;
    }
    newSalary = actualSalary + actualSalary * percent;
    
    printf("Salario Antigo: R$ %.2f\n", actualSalary);
    printf("Salario Novo: R$ %.2f\n", newSalary);
    printf("Porcentagem do Aumento: %.f%%\n", percent * 100);


    return 0;
}