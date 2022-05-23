#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[36];
    int marks;
};
void main()
{
    struct student s1,s2;
    s1.id=111;
    strcpy(s1.name,"jack");
    s1.marks=99;
    s2.id=222;
    strcpy(s2.name,"rose");
    s2.marks=98;
    printf("%d %s %d\n",s1.id,s1.name,s1.marks);
    printf("%d %s %d",s2.id,s2.name,s2.marks);
}