#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string studentName;
    int marks;
    char grade;

    // Prompt user for details
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter exam marks: ";
    cin >> marks;

    // Use if-else ladder to assign grades
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    } else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    } else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    } else if (marks >= 0 && marks < 40) {
        grade = 'E';
    } else {
        cout << "Invalid marks entered!" << endl;
        return 1; 
    }

    // Display the student details and grade
    cout << "\n--- Student Report ---" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
