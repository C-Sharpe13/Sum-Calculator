#include <iostream>
#include <string>
using namespace std;

bool convertYesOrNoToBoolean(string answer) {

    if (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "y" || answer == "Y") {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    int input = 0;
    double sum = 0;

    do {
        cout << "Enter a whole number: ";
        cin >> input; '\n';

        sum += input;

    } while (input != 0);

    cout << "Sum of all numbers = ";
    cout << sum << endl;
   
    sum = 0;
   
    string again;
    cout << "Would you like to calculate another sum? [y/n]  ";
    cin >> again;

    bool goAgain = convertYesOrNoToBoolean(again);

    while (goAgain) {
        do {
            cout << "Enter a whole number: ";
            cin >> input; '\n';

            sum += input;
        }
        while (input != 0);
        cout << "Sum of all numbers = ";
        cout << sum << endl;

        sum = 0;

        string again;
        cout << "Would you like to calculate another sum? [y/n]  ";
        cin >> again;

        bool goAgain = convertYesOrNoToBoolean(again);

        if (again == "n" || again == "no" || again == "N" || again == "NO" || again == "No") {
            break;
        }
    }
    
        return 0;
   
}