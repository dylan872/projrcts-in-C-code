#include <stdio.h>
int main()
{
    int income;
    float net_pay;
    float income_tax=0;;
printf("please enter your pay: ");
scanf("%d", &income);
if(income<=10000)
{
    printf("no tax");
}else if(income<=30000&&income>=10001)
{
    income_tax=(income-10000)*0.1;
    printf("the tax is %.2f\n",income_tax);
}else if(income<=30000&&income>=10001)
{
    income_tax=(income-30000)*0.2+(income-10000)*0.1;
    printf("the tax is %.2f\n",income_tax);
}else
{
income_tax=(income-50000)*0.3+(income-30000)*0.2+(income-10000)*0.1;
printf("the tax is %.2f\n",income_tax);
}
net_pay=income-income_tax;
printf("\n the net pay is %.2f",net_pay);
    return 0;
}