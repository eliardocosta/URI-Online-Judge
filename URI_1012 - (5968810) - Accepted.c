#include <stdio.h>
 
int main() {
 
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("TRIANGULO: %.3f\n",A*C/2.0);
    printf("CIRCULO: %.3f\n",3.14159*C*C);
    printf("TRAPEZIO: %.3f\n",(A + B)*C/2.0);
    printf("QUADRADO: %.3f\n",B*B);
    printf("RETANGULO: %.3f\n",A*B);
 
    return 0;
}