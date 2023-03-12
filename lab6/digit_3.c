#include <stdio.h>

int main() {
    int num, rev_num, diff;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    int l=1;
    while (1) {
        rev_num = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
        printf("%d",l);
        l++;
        diff = num - rev_num;
        printf("%d - %d = %d\n", num, rev_num, diff);
        num = diff;
        if (rev_num >= num) {
            printf("The result is negative.\n");
            break;
        }
    }

    return 0;
}