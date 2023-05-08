#include<stdio.h>
#include<string.h>

struct chairs
{
    char model[10];
    char name[36];
    float price;
};

void main()
{
    struct chairs c={"M21e007", "Takio", 1500.75};
    struct chairs *cp=&c;
    struct chairs **cpp=&cp;
    printf("%s %s %.2f\n", c.model, c.name, c.price);
    printf("%s %s %.2f\n", cp->model, cp->name, cp->price);
    printf("%s %s %.2f\n", (*cpp)->model, (*cpp)->name, (*cpp)->price);
    printf("%s %s %.2f\n", (*cp).model, (*cp).name, (*cp).price);
    printf("%s %s %.2f\n", (**cpp).model, (**cpp).name, (**cpp).price);

}