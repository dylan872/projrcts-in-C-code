#include <stdio.h>
void selection_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[min]>array[j])
            {
                min=j;
            }
            
        }
        int temp=array[min];
        array[min]=array[i];
        array[i]=temp;
    }
}
int main()
{
    int arr[]={2,4,7,1,3,99,8,6,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}