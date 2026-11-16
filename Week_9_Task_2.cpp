#include <iostream>
#include <string>

using namespace std;

// Base class named Vehicle
class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    // Function to input details for Vehicle
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin >> ws, brand); 
        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
    }

    // Member function to display vehicle details
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
    }
};

// Derived class named Car that inherits from Vehicle
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    // Function to input all details including inherited ones
    void inputCar() {
        inputVehicle(); 
        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
        cout << "Enter Engine Capacity (in Liters/cc): ";
        cin >> engineCapacity;
    }

    // Member function to display all car details including inherited attributes
    void displayCar() {
        displayVehicle(); 
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << endl;
    }
};

// v) Main function
int main() {
    // Create an object of the Car class
    Car carObj;

    // Input all details
    cout << "--- Input Vehicle Details ---" << endl;
    carObj.inputCar();

    // Display all details
    cout << "\n--- Displaying Vehicle Details ---" << endl;
    carObj.displayCar();

    return 0;
}