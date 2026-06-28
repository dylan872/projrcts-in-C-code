#include <stdio.h>
int main()
{
    int arr[11]={1,2,4,5,6,7,8,9,10,11};
    int value;
    printf("enter value you are searching for: ");
    scanf("%d",&value);
    int high=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int probe;
    high=high-1;
        probe=((high-low)*(value-arr[low]))/(arr[high]-arr[low]);
        if(probe==value)return probe;
        else if(probe>value)
        {
            low=probe+1;
        }else if(probe<value)
        {
            low=probe-1;
        }else
        {
            printf("value cannot be found\n");
            return 0;
        }
    
  printf("element found at index %d\n",probe);
    return 0;
}