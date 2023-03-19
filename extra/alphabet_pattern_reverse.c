// A 
// B A 
// C B A 
// D C B A 
// E D C B A 

#include <stdio.h>
int main()
{
    int n;
    n=5;
    for (int i=0; i<n;i++)
    {
        
        for (int j=i; j>=0; j-- )
        {
            
            printf("%c ",65+j);
        }
        printf("\n");
    }   
    return 0;
}