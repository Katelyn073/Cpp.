#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    // ii) Constructor
    BankAccount(string name, string accNum, double balance) {
        accountHolderName = name;
        accountNumber = accNum;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

    // iii) Member function to display account details
    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << accountBalance << endl << endl;
    }

    // iv) Destructor
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    // v) Create an object of the class and display details
    BankAccount myAccount("Arthur Lester", "1957359", 1500.75);
    myAccount.displayAccount();

    return 0;
}