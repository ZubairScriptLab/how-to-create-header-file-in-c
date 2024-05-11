#include <stdio.h>
#include "prime.h"

int main() {
    int number;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if(number>=2 && number <=200)
    {
    // Calling the function to check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }}
    else
    {
        printf("invalid number:");
    }

    return 0;
}
