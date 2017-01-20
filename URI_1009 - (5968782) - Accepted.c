#include <stdio.h>
 
int main() {
 
    char NOME;
    double SAL,VEN;
    scanf("%s",&NOME);
    scanf("%lf %lf",&SAL,&VEN);
    printf("TOTAL = R$ %.2f\n",SAL + 0.15*VEN);
 
    return 0;
}