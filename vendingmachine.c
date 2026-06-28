//start
//read
//process
#include <stdio.h>
int main()
{
    int total,choice,quanity,balance=0,amount;  
    printf("choose item you wish to purchase\n1.digestive biscuit 100\n2.oroe 170\n3.skittles 100\n4.lunchbar  195\n5.fresh 50\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
   switch(choice) 
   {
      case 1:
      printf("enter the quantity: ");
      scanf("%d",&quanity);
      total=100*quanity;
      break;
      case 2:
      printf("enter the quantity: ");
      scanf("%d",&quanity);
      total=170*quanity;
      break;
      case 3:
      printf("enter the quantity: ");
      scanf("%d",&quanity);
      total=100*quanity;
      break;
      case 4:
      printf("enter the quantity: ");
      scanf("%d",&quanity);
      total=195*quanity;
      break;
      case 5:
      printf("enter the quantity: ");
      scanf("%d",&quanity);
      total=50*quanity;
      break;
      default:
      printf("invalid choice!!");
      break;
   }
      printf("enter amount : ");
      scanf("%d",&amount);
      if(amount<total)
      {
        do
        {
        printf("please enter more money: ");
        scanf("%d",&amount);
        
        } while (amount>total);
        printf("thankyou for your services\n your balance is %d",amount-total);
        
      }else
      {
        printf("thankyou for your services\n your balance is %d\n",amount-total);
      }
        
    
    
    return 0;
}