#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    if (n > 0) {
        int fib[n];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("%d so dau tien trong day Fibonacci la:\n", n);
        for (int i = 0; i < n; i++) {
            printf("%d\n", fib[i]);
        }
    }

    return 0;
}
