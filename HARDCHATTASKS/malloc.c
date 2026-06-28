/*#include <stdio.h>
int main()
{
    int array[5]={10,90,118,45,3};
    int large=array[0];
        for(int i=0;i<5-1;i++)
        {
            if(large<array[i])
            {
              large=array[i];  
            }
        }
    
    printf("%d",large);
    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int main(void)
{
int num;
printf("enter value of num: ");
scanf("%d",&num);
int n=log10(num);
int digits=log10(num)+1;
printf("\nnumber of digits are: %d",digits);
printf("\nnumber of digits are: %d",n);
return 0;
}//respect on this code*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float account,amount;
    printf("please enter your account balance: ");
    scanf("%f",&account);
    if(account<0)
    {
        printf("you owe the bank %f",account);
        return 0;
    }
    printf("\nenter amount you wish to withdraw: ");
    scanf("%f",&amount);
    if(amount>account)
    {
        printf("yu do not have enough money to withdraw %.2f \ncause your account balance is %.2f\n",amount,account);
    }
    else{
        printf("you have succesfully withdrawn %.2f your new balance is %.f",amount,account-amount);
    }
    return 0;
}