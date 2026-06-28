#include<stdio.h>
int sum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int product(int n)
{
    if(n==0)
    {
        return 0;
    }else if(n==1)
    {
        return 1;
    }else
    {
    return n*product(n-1);   
    }
}
void even_finder(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int num;  
    printf("please enter a positive number: ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("please enter a positive integer\n");
    }else
    {
       printf("the sum of numbers from 1 to %d is %d\n",num,sum(num));
       printf("the product of numbers from 1 to %d is %d",num,product(num));
       printf("\nthe list of even numbers from 1 to %d is:",num);
       even_finder(num);
    }
    return 0;
}