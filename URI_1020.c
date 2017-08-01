#include <stdio.h>
 
int main() {
 
    int D;
    scanf("%d",&D);
    printf("%d ano(s)\n",(D - (D % 365))/365);
    D = D % 365;
    printf("%d mes(es)\n",(D - (D % 30))/30);
    D = D % 30;
    printf("%d dia(s)\n",D);
 
    return 0;
}