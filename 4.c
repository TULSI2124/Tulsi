#include <stdio.h>

int main() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("Odd numbers from %d to 1:\n", n);

  while (n >= 1) {
    if (n % 2 != 0) {
      printf("%d ", n);
    }
    n--;
  }
  printf("\n");
  return 0;
}