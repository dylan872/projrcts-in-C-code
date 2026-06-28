#include <stdio.h>
#include <ctype.h>
//fix the selling portion
int main()
{
    //inventory
    int choice;
    char exitstatus;
    int amount[6];
    int total[6]={10,4,12,20,9,30};
    char product[][100]={"1.RAM chips","2.Chassis","3.battery","4.mouse","5.system unit","6.charging system"};
    int size=sizeof(product)/sizeof(product[0]);
    int quantity[6]={10,4,12,20,9,30};
    do
    {
        printf("\ninventory management system\nMENU\n");
        printf("1.Add product\n2.sell product\n3.check inventory\n4.exit\n");       
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you want to add product\n");
        for(int i=0;i<6;i++)
        {
            printf("%s \n",product[i]);
            printf("enter quantity you wish to add: ");
            scanf("%d",&amount[i]);
            total[i]+=amount[i];
        }
        break;
        case 2:
        printf("you want to sell product\n");
        for(int i=0;i<6;i++)
        {
            printf("%s \n",product[i]);
            printf("enter quantity you wish to sell: ");
            scanf("%d",&amount[i]);
            if(amount[i]<total[i])
            {
                printf("there are not enough %s",product[i]);
            }else
            {
                total[i]-=amount[i];
            }
        }
        break;
        case 3:
        for(int i=0;i<size;i++)
        {
         printf("%-20s ****%d\n",product[i],total[i]);
        }
        break;
        case 4:
        printf("do you want to exit(Y/N): ");
        scanf(" %c",&exitstatus);
        exitstatus=toupper(exitstatus);
        break;
        default:
        printf("please enter a valid input!!");
        break;
    }
    } while (exitstatus!='Y');
    printf("thank you for entering this inventory\n");

    return 0;
}