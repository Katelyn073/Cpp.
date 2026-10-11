#include <iostream>

using namespace std;

int main() {
    double balance, withdrawalAmount;

    cout << "Enter initial account balance: ";
    cin >> balance;

    // Loop continues as long as balance is greater than zero
    while (balance > 0) {
        cout << "\nCurrent Balance: " << balance << endl;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawalAmount;

        // Stop condition: amount is greater than remaining balance
        if (withdrawalAmount > balance) {
            cout << "Withdrawal amount is greater than the balance. Operation stopped." << endl;
            break;
        }

        // Deduct and display remaining balance
        balance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: " << balance << endl;
    }

    cout << "\nFinal account balance: " << balance << ". System exited." << endl;
    return 0;
}