/* Program to create a structure for Student and display student details */

#include <stdio.h>

struct student
{
    char name[30];
    int dd, mm, yy;
    char course[20];
};

int main()
{
    struct student s1;

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dd, &s1.mm, &s1.yy);

    printf("Enter Course: ");
    scanf("%s", s1.course);

    printf("\n--- Student Details ---\n");
    printf("Name          : %s\n", s1.name);
    printf("Date of Birth : %02d-%02d-%04d\n", s1.dd, s1.mm, s1.yy);
    printf("Course        : %s\n", s1.course);

    return 0;
}