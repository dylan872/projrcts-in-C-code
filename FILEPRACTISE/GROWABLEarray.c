#include<stdio.h>
#include<stdlib.h>
void growable_array_tight(){
    //when array is full it doubles its size
    int arrlen=10;
    int count=0,size;
    size=arrlen;
    int *arr=(int*)malloc(size*sizeof(int));
    //adding elements to the Array
    for(int i=0;i<=arrlen;i++)
    {
        if(size==count){
            size*=2;
            arr=(int*)realloc(arr,size*sizeof(int));
        }
        count++;
    }
    //print arr
    for(int i=0;i<size;i++)
    {
        arr[i]=i;
        printf("%d  ",arr[i]);
    }
    free(arr);
}
int main()
{
growable_array_tight();
}