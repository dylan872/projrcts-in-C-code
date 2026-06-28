#include <stdio.h>
typedef struct 
{
  char name[50];
  int roll_number;
  int marks;
}studentrecordmanagement;

int main()
{
studentrecordmanagement students[5];
FILE *file=fopen("student.txt","w");
if(file==NULL)
{
    printf("file cannot be found\n");
}
for(int i=0;i<5;i++)
{
    printf("enter your name: ");
    scanf("%s",students[i].name);
    printf("enter your roll number: ");
    scanf("%d",&students[i].roll_number);
    printf("enter your marks: ");
    scanf("%d",&students[i].marks);
}
printf("NAME             ROLLNUMBER       MARKS\n");
for(int i=0;i<5;i++)
{
    fprintf(file,"%-20s %-15d %-10d\n",students[i].name,students[i].roll_number,students[i].marks);
}
fclose(file);
char buffer[1000];
file=fopen("student.txt","r");
if(file==NULL)
{
    printf("file cannot be located\n");
}
while(fgets(buffer,sizeof(buffer),file)!=NULL)
{
    printf("%s",buffer);
}
fclose(file);
    return 0;
}
/*this is chat gpts improved code 
i got an 8/10 for my version
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[50];
    int roll_number;
    int marks;
} studentrecordmanagement;

int main()
{
    studentrecordmanagement students[5];
    FILE *file = fopen("student.txt", "w");
    
    // Check if file was successfully opened
    if (file == NULL)
    {
        perror("Error opening file for writing");
        return 1; // Exit the program if file cannot be opened******
    }

    // Input student data
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your name: ");
        if (scanf("%49s", students[i].name) != 1) // Input validation
        {
            printf("Invalid input for name.\n");
            return 1;
        }
        
        printf("Enter your roll number: ");
        if (scanf("%d", &students[i].roll_number) != 1) // Input validation
        {
            printf("Invalid input for roll number.\n");
            return 1;
        }
        
        printf("Enter your marks: ");
        if (scanf("%d", &students[i].marks) != 1) // Input validation
        {
            printf("Invalid input for marks.\n");
            return 1;
        }
    }

    // Write student data to file
    fprintf(file, "NAME                ROLL NUMBER    MARKS\n");
    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "%-20s %-15d %-10d\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    // Close file after writing
    fclose(file);

    // Read and display student data from the file
    char buffer[1000];
    file = fopen("student.txt", "r");

    // Check if file was successfully opened
    if (file == NULL)
    {
        perror("Error opening file for reading");
        return 1; // Exit the program if file cannot be opened
    }

    printf("\nData from file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer); // Display the content of the file
    }

    // Close file after reading
    fclose(file);
    
    return 0;
}


*/