#include <stdio.h>

int main() {
    // Abhishek Kumar
    // RU-25-10052
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}

//output
// Enter a and b: 3 7
// 3 4 5 6 7