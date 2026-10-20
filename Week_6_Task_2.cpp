#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    // Member function to input student details
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    // Member function to reduce fee balance when payment is made
    void makePayment() {
        double payment;
        cout << "\nEnter amount to pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance -= payment;
            cout << "Payment of " << payment << " successful!" << endl;
        } else if (payment > feeBalance) {
            cout << "Warning: Payment amount exceeds current balance." << endl;
        } else {
            cout << "Invalid payment amount." << endl;
        }
    }

    // Member function to display student details and remaining balance
    void displayStatus() const {
        cout << "\n--- Updated Fee Status ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Admission No: " << admissionNumber << endl;
        cout << "Remaining Balance: " << feeBalance << endl;
    }
};

int main() {
    Student myStudent;

    cout << "Task 2: Student Fee Management" << endl;
    // i) Allow user to input student details
    myStudent.inputStudent();

    // ii) Process a fee payment
    myStudent.makePayment();

    // iii) Display updated fee status
    myStudent.displayStatus();

    return 0;
}