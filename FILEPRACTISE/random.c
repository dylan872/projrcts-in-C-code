#include<stddef.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
const int MAX=20;
const int MIN=0;
int FOUND_IN_ARRAY(int num,int arr[]){
    for(int i=0;i<20;i++){
        if(arr[i]==num){
            return -1;
        }
    }
    return 1;
}
int main(){
    int num;
    srand(time(0));
    int arr[20]={0};
    //so its quiet clear that numbers can repear themselves which is quite odd if you ask me but  
    for(int i=0;i<20;i++){
        num=rand()%MAX+MIN;
        
        if(FOUND_IN_ARRAY(num,arr)==-1){
            printf("%d is a duplicate\n",num);
            
        }
        arr[i]=num;
        printf("index[%d]=%d\n",i,num);  
    }
    

}