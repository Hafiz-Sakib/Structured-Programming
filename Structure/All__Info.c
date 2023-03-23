/*
Name : Hafiz Sakib
Id : 0222210005101118

*/
#include <stdio.h>
#include <string.h>
struct students
{
    char name[20];
    int std_id;
    float cgpa;
    char uni_name[20];
    char dept[10];
};

void GetStudentInformation(int n, struct students *student)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter information of Student %d : \n\n", (i + 1));

        printf("Enter the name of Student : \n");
        fflush(stdin);
        gets(student[i].name);

        printf("Enter the ID of Student : \n");
        scanf("%d", &student[i].std_id);

        printf("Enter the CGPA of Student : \n");
        scanf("%f", &student[i].cgpa);

        printf("Enter the University Name of the Student : \n");
        fflush(stdin);
        gets(student[i].uni_name);

        printf("Enter the Department Name of the Student : \n");
        fflush(stdin);
        gets(student[i].dept);
    }
}

void ShowStudentInformation(struct students student)
{
    printf("\nThis is the Information About : %s\n\n", student.name);

    printf("Name of Student is : %s\n", student.name);

    printf("Student ID of  %s  is : %d\n", student.name, student.std_id);

    printf("CGPA of  %s  is : %.2f\n", student.name, student.cgpa);

    printf("University Name of  %s  is : %s\n", student.name, student.uni_name);

    printf("Departmanet Name of  %s  is : %s\n", student.name, student.dept);
}

int main()
{
    int n;
    printf("Enter the numbers of students in your class : \n");
    scanf("%d", &n);
    struct students student[n];

    GetStudentInformation(n, student);
    for (int i = 0; i < n; i++)
    {
        ShowStudentInformation(student[i]);
    }

    return 0;
}