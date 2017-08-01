#include <stdio.h>
#include <math.h>
 
int main() {
 
    double N;
	int N1,N2;
	scanf("%lf",&N);
	N1 = floor(N);
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",(N1 - (N1 % 100))/100);
	N1 = N1 % 100;
	printf("%d nota(s) de R$ 50.00\n",(N1 - (N1 % 50))/50);
	N1 = N1 % 50;
	printf("%d nota(s) de R$ 20.00\n",(N1 - (N1 % 20))/20);
	N1 = N1 % 20;
	printf("%d nota(s) de R$ 10.00\n",(N1 - (N1 % 10))/10);
	N1 = N1 % 10;
	printf("%d nota(s) de R$ 5.00\n",(N1 - (N1 % 5))/5);
	N1 = N1 % 5;
	printf("%d nota(s) de R$ 2.00\n",(N1 - (N1 % 2))/2);
	if (N1 % 2 > 0) N2 = (N1 + (N - floor(N)))*100;
	if (N1 % 2 == 0) N2 = (N - floor(N))*100;
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",(N2 - (N2 % 100))/100);
	N2 = N2 % 100;
	printf("%d moeda(s) de R$ 0.50\n",(N2 - (N2 % 50))/50);
	N2 = N2 % 50;
	printf("%d moeda(s) de R$ 0.25\n",(N2 - (N2 % 25))/25);
	N2 = N2 % 25;
	printf("%d moeda(s) de R$ 0.10\n",(N2 - (N2 % 10))/10);
	N2 = N2 % 10;
	printf("%d moeda(s) de R$ 0.05\n",(N2 - (N2 % 5))/5);
	N2 = N2 % 5;
	printf("%d moeda(s) de R$ 0.01\n",N2);
 
    return 0;
}