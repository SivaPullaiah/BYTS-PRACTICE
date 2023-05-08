#include<stdio.h>
#include<string.h>
struct police
{
    int pid; //police id
    char name[36];
    char sname[36]; //station name
    int* sal;
};
void main()
{
    struct police p;
    int salary=10000;
    p.pid=20091;
    strcpy(p.name,"sivapullaiah");
    strcpy(p.sname,"pangajutta");
    p.sal=&salary;
    printf("%d %s %s %d", p.pid, p.name, p.sname, *(p.sal));
}