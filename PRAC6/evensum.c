#include <stdio.h>

int main() {
     // Abhishek Kumar
     // RU-25-10052
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;   

        sum = sum + i;  
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}

// output
// Enter the value of n: 6
// Sum of even numbers = 12