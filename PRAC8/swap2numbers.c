#include <stdio.h>
// Abhishek Kumar
// RU 10052
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// output
// Enter two numbers: 5 10
// Before swapping: x = 5, y = 10
// After swapping: x = 10, y = 5
