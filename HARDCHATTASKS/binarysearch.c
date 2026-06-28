#include <stdio.h>
#include <math.h>
void sorting_algorithm(int array[],int size)
{
int temp;
for(int i=0;i<size-1;i++)
{
    for(int j=0;j<size-i-1;j++)
    {
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }

}
}
int main()
{
    int size=10;
    int tries=0;
    int arr[size];
    int number;
    for(int i=0;i<size;i++)
    {
    printf("enter a number at index[%d]: ",i);
    scanf("%d",&arr[i]);
    }
    sorting_algorithm(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("what number are you searching for: ");
    scanf("%d",&number);
    int mid=size/2;
        for(int i=mid;i<size;i++)
        {
            if(arr[i]>number)
            {
                int temp=mid;
                mid=mid/2;
                mid=temp+mid;
            }else if(arr[i]<number)
            {
                int temp=mid;
                mid=mid/2; 
                mid=temp-mid; 
            }else if(arr[i]==number)
            {
                printf("%d is found in index[%d]\nIt took %d tries\n",arr[i],i,tries);
                return 0;
            }
        tries++;    
        }   
    
    printf("\n %d cannot be located in the array\n",number);
    return 0;
}//did this myself its binary search but ofc its inefficient ,,needs upgrading didnt ask chat