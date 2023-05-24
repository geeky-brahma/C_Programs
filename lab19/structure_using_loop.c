#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[10];
} s[5];

int main()
{
    
    // struct student s1, s2, s3;
    for (int i=0; i<5; i++)
    {
        printf("Enter The Roll No. of Student%d: ",i+1);
        scanf("%d", &s[i].roll);
        printf("Enter The Name of Student%d: ",i+1);
        scanf(" %[^\n]", s[i].name);
    }

    for (int i=0; i<5; i++)
    {
        printf("Roll No. of Student%d: %d\n", i+1, s[i].roll);
        printf("The Name of Student%d: %s\n", i+1, s[i].name);
    }

    return 0;
}