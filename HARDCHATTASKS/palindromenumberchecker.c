#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, original, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Negative numbers are NOT palindromes
    if (num < 0) {
        printf("%d is NOT a palindrome.\n", num);
        return 0;
    }

    original = num;  // Store the original value

    // Reverse the number (fill in the loop!)
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if original == reversed
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is NOT a palindrome.\n", original);
    }

    return 0;
}
