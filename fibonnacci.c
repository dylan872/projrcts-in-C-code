#include <stdio.h>
/*int fibonnacci(int num)
{
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fibonnacci(num-1)+fibonnacci(num-2);
    }
}
int main()
{
    int n;
    printf("please enter number of terms: ");
    scanf("%d", &n);
    printf("the fibonacci sequence is: ");
    printf("fibonacci sequence is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibonnacci(i));
    }
    return 0;
}*/
int main()
{
    int num;
    int a=0,b=1,c;
    printf("please enter number of terms: ");
    scanf("%d",&num);
    printf("fibonnnacii sequence is: ");
    printf("%d %d ",a,b);
    for(int i=2;i<num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}