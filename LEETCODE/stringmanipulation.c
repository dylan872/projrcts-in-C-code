#include <stdio.h>
int swap(int* a,int* b);
int main()
{
    int x=7;
    int y=11;
    swap(&x,&y);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
int swap(int*  a,int* b)
{
   *a=*a^*b;
   *b=*a^*b;
   *a=*a^*b;
}