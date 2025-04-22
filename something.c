#include "nocturnal.h"


int is_palindrome(int n) {
    int original = n, reversed = 0, digit;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}


int is_armstrong(int n) {
    int original = n, sum = 0, digit, temp = n, count = 0;


    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return original == sum;
}


int is_spy_number(int n) {
    int sum = 0, product = 1, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    return sum == product;
}
