#include <stdio.h>
#include <conio.h>
struct student_info
{
    int std_id;
    char name[20];
    float cgpa;
    char uni_name[20];
    char dept[10];
};
void main()
{
    struct student_info e[10];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the student id:\n");
        scanf("%d", &e[i].std_id);
        printf("Enter the name of student:\n");
        scanf("%s", e[i].name);
        printf("Enter the cgpa:\n");
        scanf("%f", &e[i].cgpa);
    }
    for (i = 0; i < 3; i++)
    {
        printf("student id:%d\n", e[i].std_id);
        printf("name:%s\n", e[i].name);
        printf("cgpa:%f\n", e[i].cgpa);
        printf("Department of Computer seience and Engineering\n");
        printf("Premier University\n");
    }
    getch();
}