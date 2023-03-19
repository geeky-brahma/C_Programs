//       1
//     1 2 1
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 


#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=n-i;j>=1;j--)
        {
            printf("  ");
        }
        for (k = 1; k<=i; k++)
        {
            printf("%d ",k);
        }
        
        for (int l = k; l>=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    

    }
    return 0;
}