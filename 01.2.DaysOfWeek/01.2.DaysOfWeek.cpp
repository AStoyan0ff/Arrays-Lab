#include <iostream>
using namespace std;

int main() {
    int day;

    if (!(cin >> day)) {
        return 1;
    }

    const char* daysOfWeek[] = {

     "Monday", "Tuesday", "Wednesday",
     "Thursday", "Friday", "Saturday", "Sunday"
    };

    if (day >= 1 && day <= 7) {
        cout << daysOfWeek[day - 1] << endl;
    }
    else {
        cout << "Invalid day!" << endl;
    }

    return 0;
}
