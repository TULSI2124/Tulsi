#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    // Setter methods
    void setName(string empName) {
        name = empName;
    }

    void setSalary(double empSalary) {
        if (empSalary >= 0)
            salary = empSalary;
        else
            cout << "Salary must be non-negative." << endl;
    }

    void setDesignation(string empDesignation) {
        designation = empDesignation;
    }

    // Getter methods
    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    string getDesignation() const {
        return designation;
    }
};

int main() {
    // Creating an object of Employee
    Employee emp;

    // Setting values using setter methods
    emp.setName("John Doe");
    emp.setSalary(55000.75);
    emp.setDesignation("Software Engineer");

    // Getting and displaying values using getter methods
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    return 0;
}