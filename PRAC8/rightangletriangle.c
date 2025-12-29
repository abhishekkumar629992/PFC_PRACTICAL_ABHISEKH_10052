#include <stdio.h>
int main() {
    // Abhishek Kumar
    // RU-25-10052
    int n;
    printf("Enter the height of the right angle triangle: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// output
// Enter the height of the right angle triangle: 5
// *
// **   
// ***
// ****
// *****