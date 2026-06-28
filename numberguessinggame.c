#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    int guess;
    int guesses=0;
    srand(time(0));
    num=rand()%100+1;
    do
    {
       
    printf("enter  A number btw 1 and 100: "); 
    scanf("%d", &guess);
    if(guess<num)
    {
        printf("too  low please try again!\n");
    }else if(guess>num)
    {
        printf("too high try again!\n");
    }else
    {
        printf("CORRECT!!you win\n");
    }
    guesses++;/* code */
    } while (guess!=num);
    printf("you guessed %d times\n",guesses);
    return 0;
}