#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float modulus(int num1, int num2);

int main() {
    char choice;
    float num1, num2, result;
    int intNum1, intNum2;

    do {
        printf("\nMenu:\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5.%\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
                break;
             case '5':
                printf("Enter two integers: ");
                scanf("%d %d", &intNum1, &intNum2);
                 if (intNum2 == 0) {
                        printf("Error: Division by zero is not allowed.\n");
                    } else {
                result = modulus(intNum1, intNum2);
                printf("Result: %.2f\n", result);
                    }
                break;
            case '6':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '6');

    return 0;
}


float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}
float modulus(int num1, int num2){
     return num1 % num2;
}
/*OUTPUT

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 2
Enter two numbers: 5
3
Result: 2.00

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 3
Enter two numbers: 5
3
Result: 15.00

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 4
Enter two numbers: 5
3
Result: 1.67

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 5
Enter two integers: 5
3
Result: 2.00

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 6
Exiting program...
*/