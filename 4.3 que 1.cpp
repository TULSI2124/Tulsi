#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employee_id;
    string name;
    int age;
    float salary;

public:
    virtual ~Employee() {} 
    virtual void input() {
        cout << "Enter Employee ID: ";
        cin >> employee_id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display() const {
        cout << "ID: " << employee_id << ", Name: " << name
             << ", Age: " << age << ", Salary: " << salary;
    }

    int getEmployeeID() const {
        return employee_id;
    }
};

class FullTimeEmployee : public Employee {
private:
    float bonus;

public:
    void input() override {
        Employee::input();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() const override {
        Employee::display();
        cout << ", Bonus: " << bonus << " (Full-Time)" << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hours_worked;

public:
    void input() override {
        Employee::input();
        cout << "Enter Hours Worked: ";
        cin >> hours_worked;
    }

    void display() const override {
        Employee::display();
        cout << ", Hours Worked: " << hours_worked << " (Part-Time)" << endl;
    }
};

const int MAX = 100;

int main() {
    Employee* employees[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Employee Management System -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Delete Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            if (count >= MAX) {
                cout << "Cannot add more employees!\n";
                break;
            }
            cout << "1. Full-Time\n2. Part-Time\nChoose type: ";
            int type;
            cin >> type;

            Employee* emp = nullptr;
            if (type == 1)
                emp = new FullTimeEmployee();
            else if (type == 2)
                emp = new PartTimeEmployee();
            else {
                cout << "Invalid choice.\n";
                break;
            }

            emp->input();
            employees[count++] = emp;
            cout << "Employee added successfully.\n";
            break;
        }

        case 2:
            if (count == 0) {
                cout << "No employees to display.\n";
                break;
            }
            for (int i = 0; i < count; i++) {
                cout << "[" << i + 1 << "] ";
                employees[i]->display();
            }
            break;

        case 3: {
            if (count == 0) {
                cout << "No employees to delete.\n";
                break;
            }
            int id;
            cout << "Enter Employee ID to delete: ";
            cin >> id;
            bool found = false;

            for (int i = 0; i < count; i++) {
                if (employees[i]->getEmployeeID() == id) {
                    delete employees[i];
                    
                    for (int j = i; j < count - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "Employee deleted successfully.\n";
                    break;
                }
            }
            if (!found)
                cout << "Employee ID not found.\n";
            break;
        }

        case 4:
            for (int i = 0; i < count; i++) {
                delete employees[i];
            }
            cout << "All memory freed. Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}