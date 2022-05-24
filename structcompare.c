#include<stdio.h>
#include<string.h>
struct temple
{
    float gift; //temple got gifts today by person
    float Dmoney; //donoted money to temple today
    int torist; //spend by toorist
    char name[30]; //torist name
};
void main()
{
    struct temple t1={3,3000,5000,"rose"},t2,t3={4,5000,7000,"jack"};
    t2=t1;
    // if(t1==t2) worng opproch
    if(t1.torist==t2.torist)
        printf("Torist money is same\n");
    if(t1.Dmoney<t3.Dmoney)
        printf("%s was gave Donation very high.\n", t3.name);
    if(t1.name==t3.name)
        printf("torist1 and 3 are same name\n");
    else
        printf("torist 1 and 3 was different names");
}