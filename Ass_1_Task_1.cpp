#include <string>
#include <iostream>
#include <iomanip>

int main() {
    // i. Declare variables to store the required details
    std::string customerName;
    std::string phoneModel;
    int quantityBought;
    double pricePerPhone;
    double totalSalesAmount;

    // Prompt the user to enter the given details
    std::cout << "=== Mobile Phone Sales Receipt System ===" << std::endl;
    
    std::cout << "Enter Customer Name: ";
    std::getline(std::cin, customerName);

    std::cout << "Enter Phone Model Purchased: ";
    std::getline(std::cin, phoneModel);

    std::cout << "Enter Quantity Bought: ";
    std::cin >> quantityBought;

    std::cout << "Enter Price Per Phone (KES): ";
    std::cin >> pricePerPhone;

    // ii. Calculate the total sales amount
    totalSalesAmount = quantityBought * pricePerPhone;

    // iii. Display a well-formatted receipt
    std::cout << "\n=======================================" << std::endl;
    std::cout << "           CUSTOMER RECEIPT            " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Customer Name:        " << customerName << std::endl;
    std::cout << "Phone Model:          " << phoneModel << std::endl;
    std::cout << "Quantity Bought:      " << quantityBought << std::endl;
    
    // Formatting currency output to two decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price Per Phone:      " << pricePerPhone << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Total Sales Amount:   " << totalSalesAmount << std::endl;
    std::cout << "=======================================" << std::endl;

    return 0;
}
