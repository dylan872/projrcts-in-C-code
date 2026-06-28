/*
#include <stdio.h>
int quicksort(int array[],int size)
{
    int i=-1;
    int j=0;
    int pivot=size-1;
    int temp;
    for(;j<size;j++)
    {
     if(array[j]>=array[pivot])
     {
        continue;
     }else if(array[j]<array[pivot])
     {
        i++;
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
     }
    }
}
int insert_pivot(int arr[],int size)
{
    int pivot=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[pivot])
        {
         int temp=arr[pivot];
         arr[pivot]=arr[i];
         arr[i]=temp;
         break;
        }
    }
}
int sort_leftside(int arr[],int size)
{
    int pivot=size-1;
    int   temp;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[pivot])
        {
        temp=i;
        }
    }
    i=0
    size=temp-1;
        sort_leftside(arr,size-1);
        sort_rightside(arr,i++);
    
}
int sort_rightside(int arr[],int size)
{
    int pivot=size-1;
    int   temp;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[pivot])
        {
        temp=i;
        }
    }
    sort_leftside(arr,size-1);
    sort_rightside(arr,i++);
}
int main()
{
    int arr[]={9,2,1,7,3,8,6,0,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,size);
    insert_pivot(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
//my stupidity has reached here