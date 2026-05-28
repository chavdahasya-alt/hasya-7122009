#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "Enter hours studied today: ";
    cin >> hours;

    if(hours >= 8) {
        cout << "Excellent work! You're highly productive today!";
    }
    else if(hours >= 5) {
        cout << "Good job! Keep improving consistently!";
    }
    else if(hours >= 2) {
        cout << "Nice effort! Try to study a little more tomorrow!";
    }
    else {
        cout << "You need to focus more on your studies!";
    }

    return 0;
}
