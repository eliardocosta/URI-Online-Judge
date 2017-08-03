#include <stdio.h>
 
int main() {
 
    int X;
    double Y;
    scanf("%d",&X);
    scanf("%lf",&Y);
    printf("%.3f km/l\n",X/Y);
 
    return 0;
}