#include <stdio.h>
 
int main() {
 
    double N1,N2,MEDIA;
    scanf("%lf %lf",&N1,&N2);
    MEDIA = (3.5*N1 + 7.5*N2)/11;
    if (MEDIA > 10) MEDIA = 10;
    printf("MEDIA = %.5f\n",MEDIA);
 
    return 0;
}