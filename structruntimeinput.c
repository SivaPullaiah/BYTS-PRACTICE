#include<stdio.h>
#include<string.h>
struct library
{
    int bookid;
    char sname[40];
    char sid[10];
    char branch[6];
};

void main()
{
    struct library student;
    printf("Book ID: ");
    scanf("%d", &student.bookid);
    printf("Student Name: ");
    scanf("%s", &student.sname);
    printf("Student ID: ");
    scanf("%s", &student.sid);
    printf("Branch: ");
    scanf("%s", student.branch);
    printf("Book information: \n");
    printf("Book ID: %d\nStudent Name: %s\nStdent ID: %s\nBranch: %s",student.bookid,student.sname,student.sid,student.branch);
}