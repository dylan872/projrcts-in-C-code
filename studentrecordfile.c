#include <stdio.h>
typedef struct 
{
    char name[100];
    int roll_number;
    int marks;
}studentrecordfile;

int main()
{
int size;
int sum=0;
float average;
printf("please enter number of students: ");
scanf("%d",&size);
studentrecordfile students[size];
FILE *file=fopen("C:\\Users\\HomePC\\Desktop\\student.txt","w");
if(file==NULL)
{
    printf("couldnt locate file\n");
    return 1;
}
for(int i=0;i<size;i++)
{
    printf("enter students %d name : ",i+1);
    scanf("%s",students[i].name);
    printf("enter students %d roll number: ",i+1);
    scanf("%d",&students[i].roll_number);
    printf("enter students %d marks: ",i+1);
    scanf("%d",&students[i].marks);
    sum+=students[i].marks;
}
average=(float)sum/size;
printf("\nSTUDENT NAME      ROLL NUMBER       MARKS\n");
for(int i=0;i<size;i++)
{
    fprintf(file,"%-20s %-15d %-10d\n",students[i].name,students[i].roll_number,students[i].marks);
}
fclose(file);
file=fopen("C:\\Users\\HomePC\\Desktop\\student.txt","r");
char buffer[1000];
if(file==NULL)
{
    printf("error oppening file for reading\n");
    return 1;
}
while(fgets(buffer,sizeof(buffer),file)!=NULL)
{
printf("%s",buffer);

}
printf("\nthe average of all the marks is %.2f\n",average);
fclose(file);
    return 0;
}