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
    // printf("Enter Number of students: ");
    struct student arr_stud[3];

    scan(arr_stud);
    print(arr_stud); 
    return 0;
}
void scan(struct student *ptr)
{
    for (int i=0; i<3; i++)
    {
        printf("Enter Ur roll: ");
        scanf("%d",&(ptr+i)->roll);
        printf("Enter Ur name: ");
        scanf("%s",(ptr+i)->name);
    }
}
void print(struct student *ptr)
{
    for (int i=0; i<3; i++)
    {
        printf("Roll: %d\t",(ptr+i)->roll);
        printf("Name: %s\n",(ptr+i)->name);
    }
    
}
