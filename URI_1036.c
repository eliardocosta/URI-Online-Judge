#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C,DEL;
    scanf("%lf %lf %lf",&A,&B,&C);
    DEL = pow(B,2) - 4*A*C;
    if (DEL < 0 || A == 0) printf("Impossivel calcular\n");
    if (DEL >= 0 && A != 0) printf("R1 = %.5f\n",(- B + sqrt(DEL))/(2*A));
    if (DEL >= 0 && A != 0) printf("R2 = %.5f\n",(- B - sqrt(DEL))/(2*A));
 
    return 0;
}