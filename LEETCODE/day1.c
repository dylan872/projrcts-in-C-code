#include <stdio.h>
int main()
{
    int size;
    printf("enter array size: ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++)
    {
        printf("enter num %d: ",i+1);
        scanf("%d",&num[i]);
    }
    int target;
    printf("\n");
    printf("enter your target: ");
    scanf("%d",&target);
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size-i;j++)
        {
            if(num[j]+num[j+1]==target)
            {
                printf("[%d,%d]",j,j+1);
                return 0;
            }
        }
    }
                printf("enter valid input ;");
            
    return 0;
}