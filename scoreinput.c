#include <stdio.h>
int main(){
    int score[6];
    int sum=0;
    float average;
    for(int i=0;i<6;i++){
        printf("enter the score of the  student: ");
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    average=(float)sum/6;
    printf("the total score of six students is %d\nThe average score is %.2f",sum,average);
    return 0;
}