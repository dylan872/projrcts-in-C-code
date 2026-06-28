#include <stdio.h>
int recursive(int n)
{
if(n<0)
{
printf("please enter a positive integer");
}else if(n==1)
{
    return 1;
}else 
{
    return n*n+recursive(n-1);
}
}
int main()
{
    int num;
    int sum=0;
    printf("enter a positive integer:");
    scanf("%d", &num);
    sum=recursive(num);
    printf("the sum of squares of numbers from 1 to %d is %d\n ",num,sum);
    return 0;
}