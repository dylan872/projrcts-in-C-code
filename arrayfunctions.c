#include <stdio.h>
int smallestnumber(int array[10])
{
    int small=array[0];
   for (int i=0;i<10;i++)
    {
        if(small>array[i])
        {
  
          small=array[i];
        }
       
    } 
    return small; 
}
int largestnumber(int array[10])
{
    int large=array[0];
    for(int i=0;i<10;i++)
    {
      if(large<array[i])
      {

        large=array[i];
      }
    }
    return large;
}
void evenFinder(int array[10])
{
    for(int i=0;i<10;i++)
    {
     if(array[i]%2==0)
     {
        printf("%d ",array[i]);
     }
    }
}
void oddFinder(int array[10])
{
    for(int i=0;i<10;i++)
    {
     if(array[i]%2!=0)
     {
        printf("%d ",array[i]);
     }
    }
}
void printArray(int array[10])
{
for(int i=0;i<10;i++)
{
    
        printf("%d  ",array[i]); 
        if(i==4)
        {
            printf("\n");
        } 
}
}
int main()
{
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the value of num %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\nsum of numbers is the array is: %d\n",sum);
    printf("the array you have input is \n");
    printArray(arr);
    printf("\nthe smallest number in the array is: %d\n", smallestnumber(arr));
   
    printf("\nthe largest number in the array is :%d \n",largestnumber(arr));
  
    printf("\neven numbers in the array are: \n");
    evenFinder(arr);
    printf("\nodd  numbers in the array are: \n");
    oddFinder(arr);
    return 0;
}