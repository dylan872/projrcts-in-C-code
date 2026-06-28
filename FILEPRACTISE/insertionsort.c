#include <stdio.h>
void insertion_sort(int array[],int size)
{
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
        if(array[j]<array[i])
        {
          int temp=array[j];
          array[j]=array[i];
          array[i]=temp;
        }
            
        }
     

    }
}
int main()
{
    int arr[]={9,2,5,10,3,6,-7,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}//turns out this is wrong implementation of insertion sort,,,sad
/*
#include <stdio.h>

void insertion_sort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i]; 
        int j = i - 1;

        // Shift elements of array[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key; // Insert key in correct position
    }
}

int main() {
    int arr[] = {9, 2, 5, 10, 3, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    insertion_sort(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
//this is the correct one
