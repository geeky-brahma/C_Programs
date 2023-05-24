#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[15];
} s1, s2, s3;
int main()
{
    
    // struct student s1, s2, s3;
    s1.roll=100;
    strcpy(s2.name,"ABC");

    s2.roll=101;
    strcpy(s3.name,"DEF");
    
    s3.roll=102;
    strcpy(s1.name,"XYZ");

    printf("%d ", s1.roll);
    printf("%s\n",s1.name);

    printf("%d ", s2.roll);
    printf("%s\n",s2.name);

    printf("%d ", s3.roll);
    printf("%s\n",s3.name);

    printf("sizeof(struct student) = %d", sizeof(struct student));
    return 0;
}