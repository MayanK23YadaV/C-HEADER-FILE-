#ifndef STRINGTOOLKIT_H
#define STRINGTOOLKIT_H

#include <ctype.h>
#include <string.h>
#include <stdlib.h>

static void to_uppercase(char str[]) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper((unsigned char)str[i]);
}

static void to_lowercase(char str[]) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower((unsigned char)str[i]);
}

static int count_vowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower((unsigned char)str[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }
    return count;
}


static void reverse_string(char str[]) {
    size_t i = 0, j = strlen(str);
    if (j > 0) j--;
    while (i < j) {
        char tmp = str[i];
        str[i++] = str[j];
        str[j--] = tmp;
    }
}

static int _cmpstr(const void *a, const void *b) {
    const char * const *sa = a;
    const char * const *sb = b;
    return strcmp(*sa, *sb);
}


static void sort_strings(char arr[][100], int n) {
    char *ptrs[ n ];
    for (int i = 0; i < n; i++)
        ptrs[i] = arr[i];
    qsort(ptrs, n, sizeof(char*), _cmpstr);

    char tmp[100];
    for (int i = 0; i < n; i++) {
        strcpy(tmp, ptrs[i]);
        strcpy(arr[i], tmp);
    }
}
static void reverse_words(char str[]) {
    char *words[100];
    int count = 0;
    char *token = strtok(str, " ");
    while (token && count < 100) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    char out[1000] = "";
    for (int i = count - 1; i >= 0; i--) {
        strcat(out, words[i]);
        if (i > 0) strcat(out, " ");
    }
    strcpy(str, out);
}

#endif 
