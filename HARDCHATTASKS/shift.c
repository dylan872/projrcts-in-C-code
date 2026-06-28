#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,5,6};
    int num;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enetr value of num: ");
    scanf("%d",&num);
    for(int i=0;i<size;i++)
    {
     if(arr[i]==num)
     {
        printf("%d,",i);
        
     }else if(i==(size-1)&&arr[i]==num)
     {
        return 0;
     }
    }
        printf("%d is not in this array\n",num);
    return 0;
}//linear search