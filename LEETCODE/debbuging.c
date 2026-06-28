/*#include <stdio.h>
#include <stdlib.h>

int *createNumber() {
    int *ptr=(int *)malloc(sizeof(int));
    *ptr=42;
    return ptr;
}

int main() {
    int *ptr=createNumber();
    if(ptr==NULL)
    {
        printf("memory block could not be accessed\n");
        return 1;
    }
    printf("%d",*ptr);
    free(ptr);
    ptr=NULL;
    

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
void *createArray()
{
    int *array=(int *)malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        array[i]=i+1;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",array[i]);
    }
    return array;
}
int main()
{
    int *pointer=createArray();
    if(pointer==NULL)
    {
      printf("cannot be located\n");
      return 1;
    }
    free(pointer);
    pointer=NULL;

    return 0;
}
