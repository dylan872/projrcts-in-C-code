#include<stdio.h>
#include<math.h>
void get_binary(int num) {
    printf("The binary equivalent of %d is: ", num);

    if (num == 0) {
        printf("0\n");
        return;
    }

    int arr[32];  // Enough to hold binary of a 32-bit int
    int i = 0;

    while (num > 0) {
        arr[i] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;
        i++;
    }

    // Print in reverse (from most significant to least)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    printf("\n");
}


void get_decimal(int N_nary,int base){
    int decimal;
    while(N_nary){
        int sum=0;
        int rem=N_nary%10;
        sum=sum+pow(rem,base);
        decimal+=sum;
        N_nary=N_nary/10;
    }
    printf("the decimal value is: %d",decimal);

}
int main()
{
    int choice;
    printf("choose:\n1.get binary\n2,get decimal\nchoice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        int num;
        printf("enter the number you want to get the binary equivalent of:");
        scanf("%d",&num);
        get_binary(num);
    }else if(choice==2){
        int binary;
        int base;
        printf("enter the binary number and its base the get its decimal value:");
        scanf("%d",&binary);
        printf(",");
        scanf("%d",&base);
        get_decimal(binary,base);
    }

    return 0;
}