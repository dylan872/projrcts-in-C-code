#include <stdio.h>
int main()
{
    char grade;
    int score;
    printf("enter your exam score btw 1 and 100: ");
    scanf("%d", &score);
    if(score>=90&&score<=100)
    {
        grade='A';
    }else if(score>=80&&score <=89)
    {
        grade ='B';
    }else if(score>=70&&score <=79)
    {
        grade ='B';
    }else if(score>=60&&score <=69)
    {
        grade ='B';
    }else
    {
        grade ='F';
    }
    printf("\n with a score of %d, your grade is %c",score,grade);
    return 0;
}