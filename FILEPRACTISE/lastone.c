#include <stdio.h>
#include <string.h>
typedef struct
{
char name[50];
int marks;
char fate[20];
}students;
int main()
{
int size;
printf("enter number of students in a given faculty: ");
scanf("%d",&size);
students std[size];
FILE *file=fopen("C:\\Users\\HomePC\\Desktop\\results.txt","w");
if(file==NULL)
{
    printf("file cannot be located\n");
    return 0;
}
for(int i=0;i<size;i++)
{
    printf("enter name: ");
    scanf("%s",std[i].name);
    printf("enter marks: ");
    scanf("%d",&std[i].marks);
    if(std[i].marks>=70)
    {
       strcpy(std[i].fate,"first class\n"); 
    }else if(std[i].marks>=60&&std[i].marks<70)
    {
        strcpy(std[i].fate,"second class\n"); 
    }else if(std[i].marks>=40&&std[i].marks<60)
    {
        strcpy(std[i].fate,"pass\n"); 
    }else
    {
        strcpy(std[i].fate,"SUPP\n"); 
    }
    printf("%s",std[i].fate);

}
printf("\nNAME   FACULTY MARKS     FATE\n");
for(int i=0;i<size;i++)
{
    fprintf(file,"%-10s Bsc %-8d %-5s\n",std[i].name,std[i].marks,std[i].fate);
}
fclose(file);
file=fopen("C:\\Users\\HomePC\\Desktop\\results.txt","r");
if(file==NULL)
{
    printf("file path cannot be located\n");
}
char buffer[1000];
while(fgets(buffer,sizeof(buffer),file)!=0)
{
printf("%s",buffer);
}
    return 0;
}