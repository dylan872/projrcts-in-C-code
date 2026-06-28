#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
int main()
{
    char choice;
    do 
    {
        printf("\nwelcome to todays traffic simulator\n");
        printf("do you want to try (y/n): ");
        scanf(" %c",&choice);
        choice=toupper(choice);
        if(choice=='Y')
        {
          printf("RED   ***\n\n");
          sleep(2);
          printf("YELLOW   ***\n\n");
          sleep(4);
          printf("GREEN   ***\n\n");
          sleep(5);
        }else if(choice=='N')
        {
         printf("you are exiting proram\n");
        }else 
        {
            printf("please enter a valid input!!\n");
        }
    }while(choice!='N');
   printf("EXITED");
    return 0;
}