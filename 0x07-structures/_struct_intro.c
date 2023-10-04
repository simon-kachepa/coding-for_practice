#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Members
{
    char name[20];
    int age;
    int mark;
};
int main(void)
{
    struct Members member1;
    struct Members member3;
    struct Members member4;
    struct Members member5;

    strcpy(member1.name, "Captain Kachepa");
    member1.age = 20;
    member1.mark = 78;

    struct Members member2 = {"McDonald Kachepa", 20, 80};

    printf("%s is %d years old and he got %d\n", member1.name, member1.age, member1.mark);
    printf("%s is %d years old and he got %d\n", member2.name, member2.age, member2.mark);
    return (0);
}
