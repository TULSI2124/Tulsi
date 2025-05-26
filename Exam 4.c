#include <stdio.h>

int main() {
  int arr[100], n, *ptr, i;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter array elements:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  ptr = arr; 

  printf("Even numbers in the array are:\n");
  for (i = 0; i < n; i++) {
    if (*ptr % 2 == 0) {
      printf("%d\n", *ptr);
    }
    ptr++; 
  }
  return 0;
}
/*output:Enter the size of array: 10
Enter array elements:
4 5 8 6 2 5 7 8 95 6
Even numbers in the array are:
4
8
6
2
8
6
*/