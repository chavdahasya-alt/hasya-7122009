#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int choice;
    float hours, total = 0, average;
    float studyHours[7];
    int count = 0;

    do {

        cout << "\n========== Student Productivity Tracker ==========";
        cout << "\n1. Log Daily Study Hours";
        cout << "\n2. Generate Weekly Report";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {

                ofstream file("study_data.txt", ios::app);

                cout << "Enter study hours for today: ";
                cin >> hours;

                file << hours << endl;

                file.close();

                cout << "Study hours saved successfully!\n";

                break;
            }

            case 2: {

                ifstream file("study_data.txt");

                total = 0;
                count = 0;

                while(file >> studyHours[count]) {

                    total += studyHours[count];
                    count++;
                }

                file.close();

                cout << "\n========== Weekly Report ==========";

                cout << "\nTotal Study Hours = " << total;

                if(count > 0) {

                    average = total / count;

                    cout << "\nAverage Study Hours = " << average;
                }
                else {

                    cout << "\nNo study data available!";
                }

                cout << endl;

                break;
            }

            case 3:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice! Try again.";
        }

    } while(choice != 3);

    return 0;
}
