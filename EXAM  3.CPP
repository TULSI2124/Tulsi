#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
private:
    string color;
    double area;

public:
    // Setter and getter for color
    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    // Setter and getter for area
    void setArea(double a) {
        area = a;
    }

    double getArea() const {
        return area;
    }

    // Virtual method for abstraction
    virtual void calculateArea() = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    void calculateArea() override {
        double a = M_PI * radius * radius;
        setArea(a);
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double a = length * width;
        setArea(a);
    }
};

int main() {
    // Circle object
    Circle c;
    c.setColor("Red");
    c.setRadius(5);
    c.calculateArea();

    cout << "Circle:" << endl;
    cout << "Color: " << c.getColor() << endl;
    cout << "Area: " << c.getArea() << endl;

    cout << endl;

    // Rectangle object
    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4, 6);
    r.calculateArea();

    cout << "Rectangle:" << endl;
    cout << "Color: " << r.getColor() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
}