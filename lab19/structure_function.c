#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[15];
} s1;
void scan ();
void print();
int main()
{
    // struct student s1;
    // s1.roll=21;
    scan();
    print();
    return 0;
}
void scan ()
{
    printf("Enter Roll: ");
    scanf("%d",&s1.roll);
    printf("Enter Name: ");
    scanf("%s",s1.name);
}
void print ()
{
    printf("Roll: %d\n",s1.roll);
    printf("Name: %s",s1.name);
}