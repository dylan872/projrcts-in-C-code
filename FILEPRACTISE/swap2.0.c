#include <stdio.h>
int main ()
{
    int a=10;
    int b=-5;
    a=a+b-(b=a);
    printf("the values of a and b are \n%d\n%d",a,b);
    return 0;
}//saw this on gram broooooo
