#include <stdio.h>
 
int main() {
 
    double A,B,C,D,E,F;
    scanf("%lf %lf %lf",&A,&B,&C);
    scanf("%lf %lf %lf",&D,&E,&F);
    printf("VALOR A PAGAR: R$ %.2f\n",B*C + E*F);
 
    return 0;
}