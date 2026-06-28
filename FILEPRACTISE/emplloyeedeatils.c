#include <stdio.h>
typedef struct 
{
 char name[50];
 int employee_ID;
 char department[50];
 float salary; 
}emplloyeedeatils;
int main()
{
     char buffer[1000];
    int size;
    printf("enter number of employees: ");
    scanf("%d",&size);
    emplloyeedeatils employees[size];
    FILE *file=fopen("C:\\Users\\HomePC\\Desktop\\employee.txt","w");
    if(file==NULL)
    {
        printf("the file cannot be located\n");
        return 1;
    }
    for(int i=0;i<size;i++)
    {
        printf("enter your name: ");
        scanf("%49s",employees[i].name);
        printf("enter your employee id number: ");
        scanf("%d",&employees[i].employee_ID);
        printf("enter the department you are from: ");
        scanf("%49s",employees[i].department);
        printf("enter employee salary: ");
        scanf("%f",&employees[i].salary);
    }
    printf("EMPLOYEE NAME                EMPLOYEE ID      DEPARTMENT    SALARY\n");
    for(int i=0;i<size;i++)
    {
        fprintf(file,"%-30s|%-15d|%-10s|%-5f\n",employees[i].name,employees[i].employee_ID,employees[i].department,employees[i].salary);
    }
    fclose(file);
    file=fopen("C:\\Users\\HomePC\\Desktop\\employee.txt","r");
   
    if(file==NULL)
    {
        printf("file cannot be located\n");
        return 1;
    }
    while(fgets(buffer,sizeof(buffer),file))
    {
        printf("%s",buffer);
    }
    return 0;
}