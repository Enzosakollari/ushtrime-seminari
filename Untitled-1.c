#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); /
    }
}
int sumFibonacci(int n) {
    if (n <= 0) {
        return 0; 
    } else {
        return fibonacci(n) + sumFibonacci(n - 1); 
    }
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    int totalSum = sumFibonacci(n);
    printf("The sum of the first %d Fibonacci numbers is: %d\n", n, totalSum);

    return 0;
}