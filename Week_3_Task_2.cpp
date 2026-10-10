#include <iostream>
#include <string>

using namespace std;
// Constant rate per unit
const double RATE_PER_UNIT = 1.0; // Example rate per unit


void getCustomerDetails(string& name, double& unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

//Function to calculate bill
double calculateBill(double unitsConsumed) {
    return unitsConsumed* RATE_PER_UNIT; 
}

//Function to apply a 10% discount if units consumed exceed 100
double applyDiscount(double billAmount, double unitsConsumed) {
    if (unitsConsumed > 100) {
        return billAmount * 0.9; // Apply 10% discount
    }
       return billAmount; // No discount
}

// Function to display full bill
void displayBill(const string& name, double unitsConsumed, double billBeforeDiscount, double discountAmount, double finalAmount) {
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Bill Before Discount: $" << billBeforeDiscount << endl;
    cout << "Discount Amount: $" << discountAmount << endl;
    cout << "Final Amount: $" << finalAmount << endl;
}

//Main function calling everything in sequence
int main() {
    string customerName;
    double unitsConsumed;

    // Get customer details
    getCustomerDetails(customerName, unitsConsumed);

    // Calculate bill
    double billBeforeDiscount = calculateBill(unitsConsumed);

    // Apply discount if applicable
    double finalAmount = applyDiscount(billBeforeDiscount, unitsConsumed);
    double discountAmount = billBeforeDiscount - finalAmount;

    // Display the full bill
    displayBill(customerName, unitsConsumed, billBeforeDiscount, discountAmount, finalAmount);

    return 0;
}