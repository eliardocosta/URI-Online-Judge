#include <stdio.h>
 
int main() {
 
    int A;
    scanf("%d",&A);
    printf("%d\n",A);
    printf("%d nota(s) de R$ 100,00\n",(A - (A % 100))/100);
    A = A - (A - (A % 100));
    printf("%d nota(s) de R$ 50,00\n",(A - (A % 50))/50);
    A = A - (A - (A % 50));
    printf("%d nota(s) de R$ 20,00\n",(A - (A % 20))/20);
    A = A - (A - (A % 20));
    printf("%d nota(s) de R$ 10,00\n",(A - (A % 10))/10);
    A = A - (A - (A % 10));
    printf("%d nota(s) de R$ 5,00\n",(A - (A % 5))/5);
    A = A - (A - (A % 5));
    printf("%d nota(s) de R$ 2,00\n",(A - (A % 2))/2);
    A = A - (A - (A % 2));
    printf("%d nota(s) de R$ 1,00\n",(A - (A % 1))/1);
 
    return 0;
}