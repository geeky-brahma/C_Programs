#include <stdio.h>
#include <stdlib.h>
struct student 
{
    int roll;
    char name[40];
};
void scan(struct student *);
void print(struct student *);
int main()
{
    struct student s1, *s;
    s=&s1;
    scan(s);
    print(s); 
    return 0;
}
void scan(struct student *ptr)
{
    printf("Enter Ur roll: ");
    scanf("%d",&ptr->roll);
    printf("Enter Ur name: ");
    scanf("%s",ptr->name);
}
void print(struct student *ptr)
{
    printf("Roll: %d\n",ptr->roll);
    printf("Name: %s",ptr->name);
}
