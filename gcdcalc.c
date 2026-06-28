#include <stdio.h>
int gcd_finder(int a,int b)
{
    if(a==0)
    {
        return b;
    }else if(b==0)
    {
        return a;
    }else
    {
     return gcd_finder(b,a%b);
    }
}
int main()
{
    int num1,num2;
    printf("enter value of num1: ");
    scanf("%d",&num1);
    printf("enter value of num2: ");
    scanf("%d",&num2);
    printf("the gcd of %d and %d is %d",num1,num2,gcd_finder(num1,num2));
    return 0;
}