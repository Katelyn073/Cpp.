#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double basicSalary;
    double bonus;
    double totalSalary;

    // Loop to get details for 5 employees
    for (int i=1; i<=5; i++) {
        cout<< "\nEnter details for Employee" << i << endl;
        cout<< "Enter Employee Name: ";
        cin>> name;
        cout<< "Enter Basic Salary: ";
        cin>> basicSalary;

        //Caculations
         bonus = 0.05 * basicSalary;
         totalSalary = basicSalary + bonus;
//Display individual employee report
    cout<< "\nEmployee Report"<< endl;
    cout<< "Name: " << name << endl;
    cout<< "Basic Salary: " << basicSalary << endl;
    cout<< "Bonus: " << bonus << endl;
    cout<< "Total Salary: " << totalSalary << endl;
    }

    return 0;
}