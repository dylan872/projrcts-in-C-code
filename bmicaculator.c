#include<stdio.h>
#include <math.h>
int main()
{
    int weight;
    float height;
    float bmi;
    printf("enter your weight: ");
    scanf("%d", &weight);
    printf("enter your height: ");
    scanf("%f", &height);
    bmi=weight/(pow(height,2));
    if(bmi<18.5)
    {
        printf("underweight\n");
    }else if(bmi>=18.5&&bmi<24.5)
    {
        printf("you are normal weight\n");
    }else if(bmi>=24.5&&bmi<29.9)
    {
        printf("you are normal weight\n");
    }else{
        printf("you are obese\n");
    }
    return 0;
}