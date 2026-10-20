#include <iostream>
#include <string>

using namespace std;

// i) Base class named Person
class Person {
protected:
    string name;
    int age;

public:
    // Function to input details for Person
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    // ii) Member function to display name and age
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// iii) Derived class named Student that inherits from Person
class Student : public Person {
private:
    string admissionNumber;
    string className;

public:
    // Function to input all details including inherited ones
    void inputStudent() {
        inputPerson(); // Call base class input function
        cout << "Enter Admission Number: ";
        getline(cin >> ws, admissionNumber);
        cout << "Enter Class: ";
        getline(cin, className);
    }

    // iv) Member function to display student details together with inherited details
    void displayStudent() {
        displayPerson(); // Call base class display function
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << className << endl;
    }
};

// v) Main function
int main() {
    // Create an object of the Student class
    Student studentObj;

    // Input all details
    cout << "--- Input Student Details ---" << endl;
    studentObj.inputStudent();

    // Display all details
    cout << "\n--- Displaying Student Details ---" << endl;
    studentObj.displayStudent();

    return 0;
}