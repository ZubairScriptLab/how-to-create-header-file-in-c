// Function to check if a number is prime
int isPrime(int num) {
    // Prime numbers are greater than 1
    if (num <= 1) {
        return 0; // Not prime
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}