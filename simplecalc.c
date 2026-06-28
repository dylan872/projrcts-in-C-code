#include <stdio.h>
int main()
{
    char character;
    int num1,num2,result;
    printf("please enter value of num1: ");
    scanf("%d",&num1);
    printf("please enter value of num2: ");
    scanf("%d",&num2);
    printf("please enter a characte(+,-./.*, %%): ");
    scanf(" %c",&character);
    switch (character)
    {
    case '+':
     result=num1+num2;
        break;
        case '-':
     result=num1-num2;
        break;
        case '*':
        result=num1*num2;
           break;
    
           case '/':
     result=num1/num2;
        
        break;
        case '%':
        result=num1%num2;
        break;
    default:
    printf("please enter a valid input\n");
        break;
    }
    printf("%d %c %d=%d\n",num1,character,num2,result);
    return 0;
}