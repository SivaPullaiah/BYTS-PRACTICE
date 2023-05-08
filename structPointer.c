#include<stdio.h>
#include<string.h>
struct phones
{
    char Mname[36]; //mobile name
    char model[10];
    int price;
    int discount;
};

void main()
{
    struct phones p1={"RedmiNote9proMax", "M2003J6B1I", 17600, 50};
    struct phones *p = &p1;
    printf("%s %s %d %d\n", p1.Mname, p1.model, p1.price, p1.discount);
    printf("%s %s %d %d", p->Mname, p->model, p->price, p->discount);
}