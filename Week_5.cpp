#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Seed the random number generator for simulated data
    srand(time(0));

    // ==========================================
    // 1D Array - Weekly Revenue Tracker
    // ==========================================
    cout << "--- 1D Array: Weekly Revenue Tracker ---" << endl;
    double revenue[7];
    double totalRevenue = 0.0;

    // Input the revenue for each day
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << (i + 1) << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    double averageRevenue = totalRevenue / 7.0;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nTotal Weekly Revenue: $" << totalRevenue << endl;
    cout << "Average Daily Revenue: $" << averageRevenue << endl;
    cout << endl;


    // ==========================================
    // 2D Array - Room Occupancy (One Branch)
    // ==========================================
    cout << "--- 2D Array: Room Occupancy (One Branch) ---" << endl;
    int occupancy[5][10];

    // Simulate random occupancy data (0 = vacant, 1 = occupied)
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    // Calculate and display occupied/vacant rooms per floor
    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        cout << "Floor " << (floor + 1) << " -> Occupied rooms: " << occupiedCount 
             << " | Vacant rooms: " << vacantCount << endl;
    }
    cout << endl;


    // ==========================================
    // 3D Array - Multiple Branches
    // ==========================================
    cout << "--- 3D Array: Multiple Branches ---" << endl;
    int chain[3][5][10];
    int totalOccupiedAcrossChain = 0;

    // Assign random occupancy and calculate total occupied rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalOccupiedAcrossChain++;
                }
            }
        }
    }

    // Display the total number of occupied rooms across the whole chain
    cout << "Total occupied rooms across all 3 branches: " << totalOccupiedAcrossChain << endl;

    return 0;
}