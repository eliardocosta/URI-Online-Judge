#include <stdio.h>
 
int main() {
 
    int A,B,C,mAB,mABC;
    scanf("%d %d %d",&A,&B,&C);
    mAB = (A + B + abs(A - B))/2;
    mABC = (mAB + C + abs(mAB - C))/2;
    printf("%d eh o maior\n",mABC);
 
    return 0;
}