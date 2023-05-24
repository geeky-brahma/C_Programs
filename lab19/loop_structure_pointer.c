#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[15];
};
int main()
{
    struct student s[3];
    
    for (int i=0; i<3; i++)
    {
        scanf("%d", &((s+i) -> roll));
        scanf("%s", (s+i) -> name);
    }

    
    for (int i=0; i<3; i++)
    {
        printf("Roll No.: %d ", (s+i) -> roll);
        printf("Name: %s\n", (s+i) -> name);
    }

    return 0;
}