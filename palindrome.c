#include <stdio.h>
int main() {
    int num, original, remainder, reversed = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original == reversed)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
