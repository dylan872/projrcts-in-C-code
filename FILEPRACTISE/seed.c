/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int MIN=1;
    int MAX;
    printf("enter seed: ");
    scanf("%d",&MAX);
    srand(time(0));
    float crash=rand()%MAX+MIN;
    printf("\nit wall crash at %.2f\n",crash);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float MIN = 1.0;   // Set the minimum float value
    float MAX;

    printf("Enter seed (MAX value): ");
    scanf("%f", &MAX);  // Read MAX as a float

    srand(time(0));  // Seed the random number generator

    // Generate a random float between MIN and MAX
    float crash = MIN + ((float)rand() / RAND_MAX) * (MAX - MIN);

    printf("\nIt will crash at %.2f\n", crash); // Display float with 2 decimal places

    return 0;
}
