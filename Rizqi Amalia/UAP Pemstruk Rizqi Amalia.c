#include <stdio.h>

int bilangan_prima(int);

int main(void) {
    int t;
    int m, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &m, &n);
        for (int j = m; j <= n; j++) {
            if (bilangan_prima (j)) {
                printf("%d\n", j);
            }
        }
        if (i < t - 1) printf("\n");
    }

    return 0;
}

int bilangan_prima (int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}