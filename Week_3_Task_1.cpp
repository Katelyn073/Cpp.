#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double RATE_PER_HOUR = 25.00;

// Function to get employee details using pass-by-reference
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Basic Salary ($): ";
    cin >> basicSalary;
    cout << "Enter Overtime Hours Worked: ";
    cin >> overtimeHours;
}

double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Function to display a well-formatted payslip
void displayPayslip(string name, double basicSalary, double overtimePay, double netSalary) {
    cout << "\n=========================================\n";
    cout << "               EMPLOYEE PAYSLIP          \n";
    cout << "=========================================\n";
    cout << left << setw(20) << "Employee Name:" << name << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Basic Salary:" << "$" << basicSalary << endl;
    cout << left << setw(20) << "Overtime Pay:" << "$" << overtimePay << endl;
    cout << "-----------------------------------------\n";
    cout << left << setw(20) << "Net Salary:" << "$" << netSalary << endl;
    cout << "=========================================\n";
}

// Main function calling everything in sequence
int main() {
    string name;
    double basicSalary, overtimeHours, overtimePay, netSalary;

    // Sequential execution
    getEmployeeDetails(name, basicSalary, overtimeHours);
    overtimePay = calculateOvertimePay(overtimeHours);
    netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimePay, netSalary);

    return 0;
}