#include <stdio.h>

int main() {
    int n;
    printf("������� ����� ����� ��������� (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("����� �� ����� ���� �������������.\n");
        return 1;
    }

    if (n == 0) {
        printf("����� ���������: 0\n");
        return 0;
    }

    if (n == 1) {
        printf("����� ���������: 1\n");
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

    printf("����� ���������: %d\n", current_fib);

    return 0;
}