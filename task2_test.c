#include <stdio.h>

const char* get_crease(int n, int x);

int main() {
    printf("--- Running Provided Examples ---\n");
    printf("n=2, x=3  -> Expected: Mountain | Got: %s\n", get_crease(2, 3));
    printf("n=4, x=11 -> Expected: Mountain | Got: %s\n\n", get_crease(4, 11));
    printf("--- Running Required Test Cases ---\n");
    printf("Test 1 (n=1, x=1)   -> %s\n", get_crease(1, 1));
    printf("Test 2 (n=3, x=6)   -> %s\n", get_crease(3, 6));
    printf("Test 3 (n=5, x=16)  -> %s\n", get_crease(5, 16));
    printf("Test 4 (n=8, x=255) -> %s\n", get_crease(8, 255));
    return 0;
}
