#include<stdio.h>

int factorial(int);

int main() {
    int n, f;
    printf("Enter a Number: ");
    scanf("%d", &n);

    f = factorial(n);
    printf("Factorial: %d\n", f);

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

