#include <stdio.h>

int main() {
    //Abhishek Kumar
    //RU-25-10052
    int pin, attempts = 0;
    int correct_pin = 1234;

    printf("Enter your ATM PIN: ");
    scanf("%d", &pin);

    while(pin != correct_pin && attempts < 3) {
        printf("Incorrect PIN. Try again: ");
        scanf("%d", &pin);
        attempts++;
    }

    if(pin == correct_pin)
        printf("PIN accepted. Access granted.");
    else
        printf("Too many incorrect attempts. Access denied.");

    return 0;
}

// output
// Enter your ATM PIN: 1111
// Incorrect PIN. Try again: 1234
//PIN accepted. Access granted.