#include<stdio.h>
#include<string.h>
struct emp{
    int id;
    char name[36];
    int sal;
};
void main()
{
    struct emp e1;
    e1.id=111;
    strcpy(e1.name, "siva");
    e1.sal=3000;
    printf("%d %s %d", e1.id,e1.name, e1.sal);
}