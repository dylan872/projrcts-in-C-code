#include <stdio.h>
int smallest(int a,int b)
{
   return (a>b)?b:a;
}
int largest(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
   /* int a=5;
    int b=9;
    int x=(b%a);
    int *p=&x;
    b=a;
    a=a+x;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;*/
   /* int a=5;
    int b=9;
    int x=(a%b);
    a=b;
    b=x;
    printf("a=%d\n",a);
    printf("b=%d\n",b);*/
    int a=-10;
    int b=9;
    int x=(smallest(a,b)%largest(a,b));
    if(a>0&&b>0)
    {
        if(a<b)
    {
        a=b;
        b=x;
    }else if(b<a)
    {
        b=a;
        a=x;
    }else
    {
        a=a;
        b=b;
    }
    }else 
    {

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
 //i argued with chat for 30min until i realised my code of using modulus wont work with negative numbers so i modified my code
 //chat also did think i was right in the end  
}