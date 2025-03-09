//WRITE C++ PROGRAM TO CONVERT SECOND INTO HOURS ,MINUTES AND SECONDS
#include <iostream>

using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    // Convert seconds
    hours = totalSeconds / 3600;            // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;   // Remaining seconds divided by 60 for minutes
    seconds = totalSeconds % 60;            // Remaining seconds

    // Display result
    cout << "Equivalent Time: " << hours << " hours, "
         << minutes << " minutes, and "
         << seconds << " seconds." << endl;

    return 0;
}
