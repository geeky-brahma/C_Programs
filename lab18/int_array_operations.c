#include <stdio.h>
int main()
{
    int n ;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter %d element",i);
        scanf("%d",(arr+i));
    }

    //Smallest Element:
    int small_ele=*arr;
    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        if (*(arr+i)<small_ele)
        {
            small_ele=*(arr+i);
        }

    }
    printf("\nSmallest Element in The Array: %d\n",small_ele);

    //Largest Element
    int lar_ele=*arr;
    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        if (*(arr+i)>lar_ele)
        {
            lar_ele=*(arr+i);
        }

    }
    printf("Largest Element in The Array: %d\n",lar_ele);

    //Numbers with 3 in them
    printf("Elements with 3 in them:\n");
    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        int j=*(arr+i);
        while (j>0)
        {
            if (j%10==3)
            {
                printf("%d ",*(arr+i));
                break;
            }
            j/=10;
        }
    }

    return 0;
}