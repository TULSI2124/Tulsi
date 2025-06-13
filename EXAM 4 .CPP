#include <iostream>
#include <cmath>
using namespace std;

// ---------------- Part 1: Shape Hierarchy ---------------- //

class Shape {
private:
    string color;
    double area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    void setArea(double a) {
        area = a;
    }

    double getArea() const {
        return area;
    }

    virtual void calculateArea() = 0;
    virtual void display() = 0; // New virtual display function
};

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

    void display() override {
        cout << "Shape: Circle\nColor: " << getColor()
             << "\nRadius: " << radius
             << "\nArea: " << getArea() << "\n\n";
    }
};

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

    void display() override {
        cout << "Shape: Rectangle\nColor: " << getColor()
             << "\nLength: " << length
             << "\nWidth: " << width
             << "\nArea: " << getArea() << "\n\n";
    }
};

// ---------------- Part 2: Employee Class ---------------- //

class Employee {
private:
    string name;
    double salary;

public:
    void setDetails(string n, double s) {
        name = n;
        salary = s;
    }

    double getSalary() const {
        return salary;
    }

    string getName() const {
        return name;
    }

    // Overload + operator to add salaries
    Employee operator+(const Employee& e) {
        Employee result;
        result.salary = this->salary + e.salary;
        result.name = this->name + " & " + e.name;
        return result;
    }

    void display() const {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};

// ---------------- Main Function ---------------- //

int main() {
    // Part 1: Polymorphism using Shape pointers
    Circle* c = new Circle();
    c->setColor("Red");
    c->setRadius(5);
    c->calculateArea();

    Rectangle* r = new Rectangle();
    r->setColor("Blue");
    r->setDimensions(4, 6);
    r->calculateArea();

    Shape* shapes[2];
    shapes[0] = c;
    shapes[1] = r;

    cout << "----- Displaying Shapes (Polymorphism) -----\n";
    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
    }

    // Part 2: Employee + Operator Overloading
    Employee emp1, emp2;
    emp1.setDetails("Alice", 50000);
    emp2.setDetails("Bob", 60000);

    Employee total = emp1 + emp2;

    cout << "----- Employee Salary Addition -----\n";
    emp1.display();
    emp2.display();
    cout << "Combined Salary:\n";
    total.display();

    // Clean up
    delete c;
    delete r;

    return 0;
}