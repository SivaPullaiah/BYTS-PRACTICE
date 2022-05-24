#include<stdio.h>
#include<string.h>
struct registration
{
    char email[20];
    int pass;
    char DOB[8];
    float age;
    char add[30];
};

void main()
{

    struct registration r={"siva@gmail.com", 9391, 08062002, 19.6, "Nandyal"};
    printf("%s %d %s %f %s",r.email, r.pass, r.DOB, r.age, r.add);
}