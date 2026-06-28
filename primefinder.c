#include <stdio.h>
#include <math.h>
void primefinder(int n)
{
    int x=sqrt(n);
    for(int i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime\n");
            return;
        }      
    }  
    printf("number is prime\n");
}
int main()
{
    int num;
    printf("enter a positive number: ");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("number cannot be prime!");
    }else if(num==2||num==3) 
    {
     printf("number is prime\n");
    }else
    {
     primefinder(num);
    }
    return 0;
}