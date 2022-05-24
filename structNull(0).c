/* AIM: Now my task is to initialize some structutre members as null(string) or
     0(int) */
#include<stdio.h>
#include<string.h>
struct gparticipent //game paricipent
{
    char name[30];
    int age;
    int no_ofg; //no of games rigistered
    char gamename[25];
};

void main()
{
    struct gparticipent p1={"jack", 20, 1, "khokho"},p2={"rose", 0, 2, "khokho and chess"}; //player1 and player2

  //we dont know the age of rose

    printf("%s %d %d %s\n", p1.name,p1.age,p1.no_ofg,p1.gamename);
    printf("%s %d %d %s\n", p2.name,p2.age,p2.no_ofg,p2.gamename);

    printf("The above rose method is not recomendable see byts notes startting 10pages after");

    //the recomendable is
    struct gparticipent p3={.name="tom", .no_ofg=3, .gamename="chesshighjumpshabaktakra"};
    printf("The above method in the program was recomendable\n");
    printf("%s %d %d %s\n", p3.name,p3.age,p3.no_ofg,p3.gamename);
    struct gparticipent p4={.name="siva", .no_ofg=3, .gamename=""};
    printf("%s %d %d %s\n", p4.name,p4.age,p4.no_ofg,p4.gamename);


}   