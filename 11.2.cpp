#include <stdio.h>

int main()
{
    int arr[5] = { 5,9,4,7,3};
    int i = 0;

    printf("Array elements: \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\nSquare of array elements: \n");
    for (i = 4; i >= 0; i--)
        printf("%d ", arr[i]  *arr[i]);

    printf("\n");

    return 0;
}
/*OUTPUT
Array elements:
5 9 4 7 3
Square of array elements:
9 49 16 81 25
*/