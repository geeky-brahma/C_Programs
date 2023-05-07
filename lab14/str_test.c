#include <stdio.h>
int main()
{
    
    int a;
    scanf("%d",&a);
    char str[a];
    scanf("%[^\n]s",str);
    printf("%s",str);

    return 0;
}
