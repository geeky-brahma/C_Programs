#include <stdio.h>
int grade_point(int var)
{
    if (var>=90)
    {
        return 10;
    }
    else if (var>=80)
    {
        return 9;
    }
    else if (var>=70)
    {
        return 8;
    }
    else if (var>=60)
    {
        return 7;
    }
    else if (var>=50)
    {
        return 6;
    }
    else if (var>=40)
    {
        return 5;
    }
    else
    {
        return 2;
    }
    
}
int main()
{
    printf("Enter marks rounding off 0.5");
    int math, eng, betc, chem, ele1, ele2;
    float sgpa;
    printf("Enter Marks for Maths: ");
    scanf("%d",&math);
    int g_m = 4*grade_point(math);
    printf("Enter Marks for English: ");
    scanf("%d",&eng);
    int g_e=2*grade_point(eng);
    printf("Enter Marks for Chemistry: ");
    scanf("%d",&chem);
    int g_c=3*grade_point(chem);
    printf("Enter Marks for Basic Electronic: ");
    scanf("%d",&betc);
    int g_b=2*grade_point(betc);
    printf("Enter Marks for Social Science Elective: ");
    scanf("%d",&ele1);
    int g_e1=2*grade_point(ele1);
    printf("Enter Marks for Engineering Elective: ");
    scanf("%d",&ele2);
    int g_e2=2*grade_point(ele2);
    float ci=g_m + g_e + g_c + g_b + g_e1 + g_e2;
    
    sgpa=ci/15;
    printf("Ur SPGA= %f",sgpa);
    
    return 0;
}