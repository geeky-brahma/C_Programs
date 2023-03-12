#include <stdio.h>

int reverse(int num) {
   int rev_num = 0;
   while (num > 0) {
      rev_num = rev_num * 10 + (num % 10);
      num = num / 10;
   }
   return rev_num;
}

int main() {
   int num, rev_num, diff;

   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   do {
      rev_num = reverse(num);
      if (num > rev_num) {
         diff = num - rev_num;
      } else {
         diff = rev_num - num;
      }
      printf("%d - %d = %d\n", num, rev_num, diff);
      num = diff;
   } while (num >= 0);

   printf("The final result is: %d\n", num);

   return 0;
}