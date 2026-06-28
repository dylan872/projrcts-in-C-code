#include <stdio.h>
#include <string.h>
int main()
{
    char username[50]="dylan_led";
    char password[50]="liMozi";
    char attemps[50];
    int num=0;
    do
    {
        printf("your username is %s\n",username);
        printf("enter your password: ");
        scanf("%s",attemps);
        num++;
        if(strcmp(password,attemps)!=0&&num==3)
        {
            printf("failed login\n");
            break;
        }else if(strcmp(password,attemps)==0)
        {
            printf("successful login");
        }
        
    } while (strcmp(password,attemps)!=0);
    return 0;
    }
