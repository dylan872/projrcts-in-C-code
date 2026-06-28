#include <stdio.h>
int main(){
    int months;
    int savings;
    int total=0;
    printf("enter no. of  months you saved for: ");
    scanf("%d", &months);
    printf("enter monthly savings amount: ");
    scanf("%d", &savings);
    total=months*savings;
    printf("you save %d monthly \nAfter %d months you will have %d ",savings,months,total);
    return 0;
}