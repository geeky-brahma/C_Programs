#include <stdio.h>
#include <math.h>
int main()
{
    float d,z,r1,r2,r_real,r_com;
    int a,b,c,con;
    printf("Quadratic Equation is of the form: ax^2 + bx + c = 0\n");
    printf("Enter Value of a: ");
    scanf("%d", &a);
    printf("Enter Value of b: ");
    scanf("%d", &b);
    printf("Enter Value of c: ");
    scanf("%d", &c);
    d=(b*b)-(4*a*c);
    con=d>=0;
    // printf("%f", d);
    switch (con)
    {
    case 1:
        z=sqrt(d);
        r1=(-b+z)/(2*a);
        r2=(-b-z)/(2*a);
        printf("The 2 real roots of the given quadratic equation are\n%.2f and %.2f",r1,r2);
        break;
    case 0:
        z=sqrt(-d);
        // printf("%f",z);
        r_real=-0.5*b/a;
        // printf("%f",r_real);
        r_com=(z)/(2*a);
        
        printf("The 2 imaginary roots of the given quadratic equation are\n%.3f + %.3fj and %.3f - %.3fj",r_real,r_com,r_real,r_com);
        break;
    default:
        printf("Kuch Toh Gadbad Hai !!")
        break;
    }

    return 0;
}