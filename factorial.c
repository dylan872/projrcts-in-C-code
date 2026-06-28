#include <stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }else
    {
     return n*factorial(n-1);
    }
}
int main()
{
    int num;
    printf("enter a positive number: ");
    scanf("%d", &num);
    printf("the factorial of %d is %d",num,factorial(num));
}