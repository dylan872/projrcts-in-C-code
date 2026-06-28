#include <stdio.h>
#include <math.h>
int main()
{
    int size;
    printf("enter size of num1 i.e number of digits it contains: ");
    scanf("%d",&size);
    int size2;
    printf("enter size of num1 i.e number of digits it contains: ");
    scanf("%d",&size2);
    int num[size];
    int num9[size2];
    int num1=0;
    int num2=0;
    int rem2=0;
    int rem=0;
    printf("enter digits of the number in order of increasing place value: \n");
    printf("enter digits of num:\n");
    for(int i=0;i<size;i++)
    {
        printf("enter digit%d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\nenter values of num9: \n");
    for(int j=0;j<size2;j++)
    {
        printf("enter digit%d: ",j+1);
        scanf("%d",&num9[j]);    
    }
    for(int j=0;j<size;j++)
    {
        rem=(pow(10,j))*num[j]; 
        num1+=rem;
    }
    printf("%d\n",num1);
    for(int i=0;i<size2;i++)
    {
        rem2=(pow(10,i))*num9[i]; 
        num2+=rem2;
    }
    printf("%d\n",num2);
    printf("%d+%d=%d",num1,num2,num1+num2);
    int sum=num1+num2;
    int rema=0;
    printf("\nreversed: ");
    while(sum!=0)
    {
        rema=sum%10;
        sum=sum/10;
        printf("%d",rema);
    }
    return 0;
}