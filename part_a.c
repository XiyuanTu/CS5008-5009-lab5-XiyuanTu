#include <stdio.h>

long long factorial(int n);

int main() {
    int num;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    result = factorial(num);
    printf("Factorial of %u = %llu\n", num, result);

    return 0;
}

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}