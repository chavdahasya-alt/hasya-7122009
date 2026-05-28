#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string goal;

    // Write goals to file
    ofstream writeFile("goals.txt", ios::app);

    cout << "Enter today's goal: ";
    cin.ignore();
    getline(cin, goal);

    writeFile << goal << endl;

    writeFile.close();

    // Read goals from file
    ifstream readFile("goals.txt");

    cout << "\nSaved Goals:\n";

    while(getline(readFile, goal)) {
        cout << goal << endl;
    }

    readFile.close();

    return 0;
}
