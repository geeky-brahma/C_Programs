#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0 || sum > 9) {
        if(num == 0) {
            num = sum;
            sum = 0;
        }
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    
    printf("The sum of individual digits until the result is a single digit is %d\n", sum);
    
    return 0;
}