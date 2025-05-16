#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  printf("Before swapping: a = %d, b = %d\n", a, b);

  swap(&a, &b);

  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}
/*OUTPUT
Enter the value of a: 5
Enter the value of b: 3
Before swapping: a = 5, b = 3
After swapping: a = 3, b = 5
*/