#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[15];
};
int main()
{
    struct student s, *sptr1=&s;
    struct student s2, *sptr2=&s2;
    struct student s3, *sptr3=&s3;

    sptr1 -> roll=101;
    strcpy(sptr1->name,"ABC");
    printf("%d ",sptr1->roll);
    printf("%s",sptr1->name);  

    sptr2 -> roll=102;
    strcpy(sptr2->name,"BCD");
    printf("%d ",sptr2->roll);
    printf("%s",sptr2->name);

    sptr3 -> roll=103;
    strcpy(sptr3->name,"CDE");
    printf("%d ",sptr3->roll);
    printf("%s",sptr3->name);

    return 0;
}