// main.c
#include <stdio.h>
#include "nocturnal.h"

int main() {
    int n = 153;

    if (is_palindrome(n)) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is NOT a palindrome number.\n", n);
    }

    if (is_armstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }

    if (is_spy_number(n)) {
        printf("%d is a Spy number.\n", n);
    } else {
        printf("%d is NOT a Spy number.\n", n);
    }

    return 0;
}
