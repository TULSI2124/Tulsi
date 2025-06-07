#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int v) : value(v) {}

    // Overload the < operator
    bool operator<(const Number& other) {
        return value < other.value;
    }

    // Getter for value
    int getValue() const {
        return value;
    }
};

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Number num1(a);
    Number num2(b);

    if (num1 < num2) {
        cout << "Second number (" << num2.getValue() << ") is higher." << endl;
    } else if (num2 < num1) {
        cout << "First number (" << num1.getValue() << ") is higher." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
/*OUTPUT
Enter first number: 111
Enter second number: 112
Second number (112) is higher.
*/