#include <stdio.h>
 
int main() {
 
    int NUM,HOR; 
    double VH,SAL; 
    scanf("%d %d",&NUM, &HOR);
    scanf("%lf",&VH);
    SAL = VH*HOR;
    printf("NUMBER = %d\n",NUM);
    printf("SALARY = U$ %.2f\n",SAL);
 
    return 0;
}