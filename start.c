#include<stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("Hello, ");
    printf("World!");
    printf("\n");
    // printf("\c");
    // warning: unknown escape sequence: ‘\c’
    printf("\\c\n");
    return 0; // New version of C returns 0 by default and 0 means success. If you return 1, it means failure.
}