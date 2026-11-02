#include <iostream>
#include <string> 
using namespace std;

int main() {
    int temp;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;

    if (temp < 32) {
        cout << "That's Freezing." << endl;
    }
    else if (temp < 60) {
        cout << "That's Cold." << endl;
    }
    else if (temp <= 75) {
        cout << "That's Mild." << endl;
    }
    else {
        cout << "That's Hot." << endl;
    }

    return 0;
}
