#include <stdio.h>
int largest(int a,int b,int c)
{
    if(a>=b)
    {
      return a;
    }else if(a>=c)
    {
        return a;
    }else if(b>=c)
    {
        return b;
    }
}
void triangle_test(int a,int b,int c)
{
if(c==largest(a,b,c)&&c<=b+a)
{
    printf("the triangle is ok\n");
}else if(b==largest(a,b,c)&&b<=a+c)
{

    printf("the triangle is ok\n");
}else if(a==largest(a,b,c)&&a<=b+c)
{

    printf("the triangle is ok\n");
}
    else
{
printf("this trriangle is not possible\n");
}
}
int main()
{
    int side[3];
    int size=sizeof(side)/sizeof(side[0]);
    for(int i=0;i<size;i++)
    {
        printf("enter thr size of side %d : ",i+1);
        scanf("%d",&side[i]);
    }
    largest(side[0],side[1],side[2]);
    triangle_test(side[0],side[1],side[2]);
    if(side[0]==side[1]||side[0]==side[2]||side[1]==side[2])
    {
        printf("the triangle is isosceles\n");
    }else if(side[0]==side[1]&&side[1]==side[2])
    {
        printf("the triangle is equilateral\n");
    }else
    {
       printf("the triangle is scalene\n");
    }
    return 0;
}