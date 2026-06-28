#include <stdio.h>
int multiply(int a,int b)
{
    int res=0;
    while(b)
    {
        if(b&1)
        {
            res+=a;
            a<<=1;
            b>>=1;
        }
    }
    return res;
}
int main()
{
    int num1=20;
    int num2=15;
    printf("the product of %d and %d is %d",num1,num2,multiply(20,15));
    return 0;

}