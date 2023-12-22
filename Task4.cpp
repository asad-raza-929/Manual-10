#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    double salary;
    int hoursWorked;
};

void increaseSalary(Employee &emp) {
    if (emp.hoursWorked >= 12) {
        emp.salary += 150;
    } else if (emp.hoursWorked >= 10) {
        emp.salary += 100;
    } else if (emp.hoursWorked >= 8) {
        emp.salary += 50;
    }
}

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees] = {
        {"Employee 1", 2000, 8},
        {"Employee 2", 2200, 10},
        {"Employee 3", 1800, 12},
        {"Employee 4", 2000, 8},
        {"Employee 5", 3000, 14},
        {"Employee 6", 1200, 7},
        {"Employee 7", 2000, 8},
        {"Employee 8", 2800, 10},
        {"Employee 9", 1150, 6},
        {"Employee 10", 1900, 9},
    };

    cout << "Initial salaries:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << employees[i].name << ": $" << employees[i].salary << endl;
    }

    cout << "\nIncreasing salaries based on hours worked:\n";
    for (int i = 0; i < numEmployees; ++i) {
        increaseSalary(employees[i]);
    }

    cout << "\nFinal salaries after increase:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << employees[i].name << ": $" << employees[i].salary << endl;
    }

    return 0;
}
