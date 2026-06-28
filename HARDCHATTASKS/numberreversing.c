#include <stdio.h>
#include <stdlib.h>
int main()
{
   /* int num,remainder;
    printf("enter any integer: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("reversed: ");
        while(num!=0)
    {
        remainder=num%10;
        num=num/10;
        printf("%d",remainder);
        
    }
    }else
    {
        num=abs(num);
        printf("reversed:-");
        while(num!=0)
        {
            remainder=num%10;
            num=num/10;
            printf("%d",remainder);
            
        }

    }
        #include <stdio.h>
#include <stdlib.h>

int main() {
    int num, remainder;
    
    printf("Enter any integer: ");
    scanf("%d", &num);

    // Handle zero case
    if (num == 0) {
        printf("Reversed: 0\n");
        return 0;
    }

    // Store the sign separately
    int isNegative = (num < 0);
    num = abs(num);

    // Print the sign if negative
    printf("Reversed: ");
    if (isNegative) {
        printf("-");
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        num = num / 10;
        printf("%d", remainder);
    }

    printf("\n");  // Add a newline for better formatting
    return 0;
}
*/
int num,remainder;
printf("enter an integer: ");
scanf("%d",&num);
if(num==0)
{
    printf("reversed: 0");
    return 0;
}
int negative=(num<0);
num=abs(num);
printf("remainder: ");
if(negative)
{
    printf("-");
}
while(num!=0)
{
    remainder=num%10;
    num=num/10;
    printf("%d",remainder);
    
}
    return 0;
}