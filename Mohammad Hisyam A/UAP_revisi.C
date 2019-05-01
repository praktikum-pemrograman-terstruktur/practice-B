#include <stdio.h>

int is_prime(int);

int main(void) {
  int input, a, b;
  scanf("%d", &input);
  for (int i = 0; i < input; i++) {
    scanf("%d %d", & a, & b);
    for (int j = a; j <= b; j++) {
      if (is_prime(j)) {
        printf("%d\n", j);
      }
    }
    if (i < input - 1) printf("\n");
  }

  return 0;
}

int is_prime(int num) {
  if (num <= 1) return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}