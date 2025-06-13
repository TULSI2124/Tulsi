#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor (optional)
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Setter for length
    void setLength(double l) {
        if (l >= 0)
            length = l;
        else
            cout << "Length must be non-negative." << endl;
    }

    // Setter for width
    void setWidth(double w) {
        if (w >= 0)
            width = w;
        else
            cout << "Width must be non-negative." << endl;
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Method to calculate area
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    // Set values
    rect.setLength(10.5);
    rect.setWidth(4.2);

    // Get and display values
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Display area
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}