/*
Salário
https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
*/

#include <stdio.h>

int main() {

    int NUMBER,CAL;
    float CAL2,SALARY;

    scanf("%d",&NUMBER);
    scanf("%d",&CAL);
    scanf("%f",&CAL2);

    SALARY=CAL*CAL2;

    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}
