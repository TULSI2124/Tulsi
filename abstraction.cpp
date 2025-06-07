#include<iostream>
#include <string>
using namespace std;


class Admin {
private:
    string company_name;          
    double total_annual_revenue;   

protected:
    double manager_salary;
    double employee_salary;
    int total_staff;
    bool can_terminate;

public:
    Admin() {
        company_name = "OpenAI";
        manager_salary = 80000;
        employee_salary = 50000;
        total_staff = 200;
        total_annual_revenue = 10000000;
        can_terminate = true;
    }

    virtual void myAccess() {
        cout << "Admin Access:" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
        cout << "----------------------------------" << endl;
    }
};


class Manager : public Admin {
public:
    void myAccess() override {
        cout << "Manager Access:" << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
        cout << "----------------------------------" << endl;
    }
};


class Employee : public Manager {
public:
    void myAccess() override {
        cout << "Employee Access:" << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
        cout << "----------------------------------" << endl;
    }
};


int main() {
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}
/*OUTPUT
Admin Access:
Company Name: OpenAI
Manager Salary: 80000
Employee Salary: 50000
Total Staff: 200
Total Annual Revenue: 1e+07
Can Terminate: Yes
----------------------------------
Manager Access:
Manager Salary: 80000
Employee Salary: 50000
Total Staff: 200
Can Terminate: Yes
----------------------------------
Employee Access:
Employee Salary: 50000
Total Staff: 200
Can Terminate: Yes
*/