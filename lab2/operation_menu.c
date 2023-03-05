#include <stdio.h>
int main()
{   
    int choice, result, a, b;
    printf("Enter Value for a: ");
    scanf("%d", &a);
    printf("Enter Value for b: ");
    scanf("%d", &b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\nEnter Your Choice:");
    scanf("%d", &choice);
    if (choice==1)
    {
        result=a+b;
        printf("Addition of a and b\n%d + %d = %d\n",a,b,result);
    }
    else if (choice==2)
    {
        result=a-b;
        printf("Subtraction of a and b\n%d - %d = %d\n",a,b,result);
    }
    else if (choice==3)
    {
        result=a*b;
        printf("Multiplication of a and b\n%d * %d = %d\n",a,b,result);
    }
    else if (choice==4)
    {
        result=a/b;
        printf("Division of a and b\n%d / %d = %d\n",a,b,result);
    }
    else if (choice==5)
    {
        result=a%b;
        printf("Modulus of a and b\n%d %% %d = %d\n",a,b,result);
    }
    return 0;
}