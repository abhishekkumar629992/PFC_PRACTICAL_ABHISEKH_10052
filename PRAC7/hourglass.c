#include <stdio.h>  
int main() {
    // Abhishek Kumar
    // RU-25-10052
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Upper half of hourglass
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * (n - i) - 1; k++) {
            if(k == 0 || k == 2 * (n - i) - 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half of hourglass
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * (n - i) - 1; k++) {
            if(k == 0 || k == 2 * (n - i) - 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

// output
// Enter the value of n: 5
// ***********
//  *       *
//   *     *
//    *   *
//     * *
//      *
//     * *
//    *   *
//   *     *
//  *       *
// ***********