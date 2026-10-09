#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // i. Declare variables to store the required details
    std::string studentName;
    double theoryMarks;
    double practicalMarks;
    double averageScore;

    // Prompt the user to enter the details
    std::cout << "=== Driving Test Result Evaluation System ===" << std::endl;
    
    std::cout << "Enter Student Name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter Theory Test Marks: ";
    std::cin >> theoryMarks;

    std::cout << "Enter Practical Test Marks: ";
    std::cin >> practicalMarks;

    // ii. Calculate the average score
    averageScore = (theoryMarks + practicalMarks) / 2.0;

    // iii. Display the results and evaluation status
    std::cout << "\n=======================================" << std::endl;
    std::cout << "       DRIVING TEST EVALUATION         " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Student Name:     " << studentName << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Theory Marks:     " << theoryMarks << std::endl;
    std::cout << "Practical Marks:  " << practicalMarks << std::endl;
    std::cout << "Average Score:    " << averageScore << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Determine if the student passed or failed
    if (averageScore >= 50.0) {
        std::cout << "Status:           PASSED" << std::endl;
    } else {
        std::cout << "Status:           FAILED" << std::endl;
    }
    std::cout << "=======================================" << std::endl;

    return 0;
}
