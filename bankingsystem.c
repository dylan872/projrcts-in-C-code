#include <stdio.h>
#include <ctype.h>
int main()
{
    int choice,amount;
    int account=0;
    printf("choose any option from the above\n");
    printf("1.deposit money\n2.withdraw money\n3.check balance\n4.exit\n");
    do
    {
        printf("pleass enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("please enter amount you wish to deposit: ");
            scanf("%d",&amount);
            account+=amount;
            printf("your account balance is %d \n",account);
            break;
            case 2:
            printf("please enter amount you wish to withdraw: ");
            scanf("%d",&amount);
            account-=amount;
            printf("\nyour account balance is %d ",account);
            break;
            case 3:
            printf("your account balance is %d ",account);
            break;
            default:
            printf("invalid input\n");
            break;
        }
    } while (choice!=4);
    
   printf("\nthank you for using DYLAN BANKS\n");
    return 0;
}