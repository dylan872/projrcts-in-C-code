/*#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int num;
  char task[10][100];
  srand(time(0));
  num=rand()%10+1;
  for(int i=0;i<10;i++)
  {
     printf("please enter %d tasks you want to choose from: ",i+1);
     fgets(task[i],100,stdin);
  }
  switch (num)
  {
  case 1:
      printf("\ngo and %s",task[0]);
    break;
    case 2:
    printf("\ngo and %s",task[1]);
    break;
    case 3:
    printf("\ngo and %s",task[2]);
    break;
    case 4:
    printf("\ngo and %s",task[3]);
    break;
    case 5:
    printf("\ngo and %s",task[4]);
    break;
    case 6:
    printf("\ngo and %s",task[5]);
    break;
    case 7:
    printf("\ngo and %s",task[6]);
    break;
    case 8:
    printf("\ngo and %s",task[7]);
    break;
    case 9:
    printf("\ngo and %s",task[8]);
    break;
    case 10:
    printf("\ngo and %s",task[9]);
    break;
  default:
     printf("\ninvalid input try again later\n");
     return 1;
    break;
  }
  printf("\nYEAH LOCK IN !!!\n");

}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int size;
    printf("possibilities: ");
    scanf("%d",&size);
    int num;
    char input[size][100];
    srand(time(0));
    num=rand()%size+1;
    printf("%d\n",size);
    for(int i=0;i<size;i++)
    {
        printf(" possibility %d: ",i+1);
        scanf("%99s",input[i]);
        printf("\n");
    }
    printf("\n%s\n",input[num]);
    printf("LOCK IN BROTHER\n");
    return 0;
}