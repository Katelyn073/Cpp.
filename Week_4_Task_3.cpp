#include <iostream>
#include <string>

using namespace std;

int main() {
    // Predefined correct credentials
    const string correctUsername = "admin";
    const string correctPassword = "securePassword123";

    string inputUsername, inputPassword;
    bool accessGranted = false;

    // Code blocks execute at least once before testing condition
    do {
        cout << "\n--- Login System ---" << endl;
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter Password: ";
        cin >> inputPassword;

        // Check credentials
        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            cout << "Access Granted" << endl;
            accessGranted = true;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (!accessGranted); // Continues until access is granted

    return 0;
}