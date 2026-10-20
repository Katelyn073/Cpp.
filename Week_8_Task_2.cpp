#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDaysBooked;

public:
    // ii) Constructor
    RoomBooking(string name, int roomNum, int days) {
        guestName = name;
        roomNumber = roomNum;
        numberOfDaysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    // iii) Member function to display details
    void displayBooking() {
        cout << "--- Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << numberOfDaysBooked << " days" << endl;
    }

    // iv) Destructor
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

// v) Main function
int main() {
    // Creating an object of the class
    RoomBooking myBooking("Alice Smith", 101, 3);
    
    // Display booking details
    myBooking.displayBooking();

    return 0;
}