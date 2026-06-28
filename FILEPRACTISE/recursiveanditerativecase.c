/*#include<stdio.h>
int walk(int steps)
{
for(int i=0;i<steps;i++)
{
    printf("step %d\n",i+1);
}
}
//iterative case
int walk(int steps)
{
    if(steps<1)return 0;
    else
    {
        return walk(steps-1);
    }
}//recursive case
int main()
{
    walk(100);
    return 0;
}*/
#include <stdio.h>
int factorial(int num)
{
    if(num<0)
    {
        printf("there are no factorials of negative numbers\n");
        return 0;
    }
   else if(num==1||num==0)
    {
        return 1;
    }else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    printf("%d",   factorial(10));
 
    return 0;
}