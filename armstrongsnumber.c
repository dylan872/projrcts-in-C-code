#include <stdio.h>
#include <math.h>
int main()
{
    //armstrongs number example is 153 inn that 1power 3+5power 3+3power 3 you get 153
    //it works in that each digit in the number raised to the power of the number of digits in the number ,their sum is equal to the number itself
   int num,temp;
   int remainder;
   int n=0,sum=0;
   printf("enter a number: ");
   scanf("%d",&num);
   temp=num;
   do
   {
    num=num/10;
    n++;
   } while (num!=0);
   remainder=temp;
   num=remainder;
   do 
   {
    remainder=num%10;
    num=num/10;
    sum+=pow(remainder,n);
   } while(num!=0);
   num=temp;
   if(sum!=num)
   {
    printf("its not an armstrongs number\n");
   }else
   {
    printf("its an armstrongs number\n");
   }
    return 0;
}