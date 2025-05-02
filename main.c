#include <stdio.h>
#include "stringtoolkit.h"

int main() {
    char s1[100] = "Hello, World!";
    to_uppercase(s1);
    printf("Uppercase: %s\n", s1);

    char s2[100] = "Hello, World!";
    to_lowercase(s2);
    printf("Lowercase: %s\n", s2);

    const char *s3 = "Education";
    printf("Vowels in \"%s\": %d\n", s3, count_vowels(s3));

    char s4[100] = "abcdefg";
    reverse_string(s4);
    printf("Reversed string: %s\n", s4);

    char arr[5][100] = {
        "banana",
        "Apple",
        "cherry",
        "apple",
        "Banana"
    };
    sort_strings(arr, 5);
    printf("Sorted strings:\n");
    for (int i = 0; i < 5; i++)
        printf("  %s\n", arr[i]);

    char s5[200] = "this is a test";
    reverse_words(s5);
    printf("Reversed words: %s\n", s5);

    return 0;
}
