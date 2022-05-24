#include<stdio.h>
#include<string.h>
struct worker
{
    char wno[10];
    float age;
    int wages;
};
void main()
{
    struct worker w1={"20091a", 40.6, 250};
    struct worker w2;
    w2=w1;
    printf("%s %f %d",w2.wno, w2.age, w2.wages);
    /* it will won't work comapare directly on structure variales*/
}