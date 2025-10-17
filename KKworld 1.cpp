#include <stdio.h>

int main() {
    int n;
    printf("Введите номер числа Фибоначчи (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Номер не может быть отрицательным.\n");
        return 1;
    }

    if (n == 0) {
        printf("Число Фибоначчи: 0\n");
        return 0;
    }

    if (n == 1) {
        printf("Число Фибоначчи: 1\n");
        return 0;
    }

    int fib1 = 0;
    int fib2 = 1;
    int current_fib = 0;

    for (int i = 2; i <= n; i++) {
        current_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = current_fib;
    }

    printf("Число Фибоначчи: %d\n", current_fib);

    return 0;
}