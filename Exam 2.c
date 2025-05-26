#include <stdio.h>

float average(int rows, int cols, int arr[rows][cols]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return (float)sum / (rows * cols);
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    float avg = average(rows, cols, arr);
    printf("The average of the elements in the 2D array is: %.2f\n", avg);
    return 0;
}/*
output:
Enter the number of rows: 5
Enter the number of columns: 5
Enter the elements of the array:
2 5 8 5 4 5 78 9 5 5 6 5 5 5 52 696 322 1 4 8 6 2 41 88  +6 215 85 5 52 674 9652 4 965 8 9652 5932 1 55 8 66
The average of the elements in the 2D array is: 54.92
*/
