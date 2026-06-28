#include <stdio.h>
typedef struct 
{
  char name[50];
  int roll_number;
  int marks;
  char grade;
}gradeinfiles;
int main()
{
    int size;
    printf("enter number of students: ");
    scanf("%d",&size);
    gradeinfiles students[size];
    FILE *file=fopen("grades.txt","w");
    if(file==NULL)
    {
        printf("file cannot be located\n");
        return 1;
    }
    for(int i=0;i<size;i++)
    {
        printf("enter your name: ");
        scanf("%49s",students[i].name);
        printf("enter your roll number: ");
        scanf("%d",&students[i].roll_number);
        printf("enter your marks: ");
        scanf("%d",&students[i].marks);
        if(students[i].marks>=90&&students[i].marks<=100)
        {
            students[i].grade='A';
        }else if (students[i].marks>=80&&students[i].marks<=89)
        {
            students[i].grade='B';
        }
        else if (students[i].marks>=70&&students[i].marks<=79)
        {
           students[i].grade='C';
        }
        else if (students[i].marks>=60&&students[i].marks<=69)
        {
            students[i].grade='D';
        }
        else if (students[i].marks>=0&&students[i].marks<=59)
        {
            students[i].grade='F';
        }else
        {
            printf("please enter a value btw 1 and 100\n");
            return 1;
        }
        printf("your grade is: %c\n",students[i].grade);
    }
    printf("NAME             ROLL NUMBER      MARKS      GRADE\n");
    for(int i=0;i<size;i++)
    {
        fprintf(file,"%-20s %-15d %-10d %-5c\n",students[i].name,students[i].roll_number,students[i].marks,students[i].grade);
    }
    fclose(file);
    file=fopen("grades.txt","r");
    char buffer[2000];
    if(file==NULL)
    {
        printf("file cannot be located\n");
        return 1;
    }
    while(fgets(buffer,sizeof(buffer),file)!=NULL)
    {
        printf("%s",buffer);
    }
    fclose(file);
    return 0;
}
/*
i got a rate of 8.5/10 on my previous code
this one is a rating 10;
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll_number;
    int marks[3];  // Marks for three subjects
    int total_marks;
    char grade;
} gradeinfiles;

void calculate_grade(gradeinfiles *student) {
    student->total_marks = 0;
    for (int i = 0; i < 3; i++) {
        student->total_marks += student->marks[i];
    }

    if (student->total_marks >= 270) {  // A grade for 90% or more
        student->grade = 'A';
    } else if (student->total_marks >= 240) {
        student->grade = 'B';
    } else if (student->total_marks >= 210) {
        student->grade = 'C';
    } else if (student->total_marks >= 180) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

int main() {
    int size;

    // User input for the number of students
    printf("Enter number of students: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Dynamically allocate memory for students
    gradeinfiles *students = (gradeinfiles *)malloc(size * sizeof(gradeinfiles));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    FILE *file = fopen("grades.txt", "w");
    if (file == NULL) {
        printf("File cannot be created.\n");
        free(students);
        return 1;
    }

    // Loop to input student details
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        if (scanf("%49s", students[i].name) != 1) {
            printf("Invalid input for name.\n");
            free(students);
            fclose(file);
            return 1;
        }

        printf("Roll Number: ");
        if (scanf("%d", &students[i].roll_number) != 1) {
            printf("Invalid input for roll number.\n");
            free(students);
            fclose(file);
            return 1;
        }

        // Input marks for 3 subjects
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            if (scanf("%d", &students[i].marks[j]) != 1 || students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                printf("Invalid marks. Please enter a number between 0 and 100.\n");
                free(students);
                fclose(file);
                return 1;
            }
        }

        calculate_grade(&students[i]);

        // Output grade for each student
        printf("Student Grade: %c\n", students[i].grade);
    }

    // Writing student data to the file
    fprintf(file, "NAME                 ROLL NUMBER   MARKS  GRADE\n");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%-20s %-15d %-10d %-10c\n", students[i].name, students[i].roll_number, students[i].total_marks, students[i].grade);
    }
    fclose(file);

    // Reading and displaying student data from the file
    file = fopen("grades.txt", "r");
    if (file == NULL) {
        printf("File cannot be opened for reading.\n");
        free(students);
        return 1;
    }

    char buffer[200];
    printf("\nDisplaying student information from file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    free(students);
    return 0;
}

*/