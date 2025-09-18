#include <iostream>
#include "input_prot.h"
using namespace std;

int getInput(const char* prompt, const char* error, int min, int max) {
    int value;

    while (true) {
        cout << prompt;

        if (cin >> value) {
            if (value >= min && value <= max) {
                return value;
            } else {
                cout << error << endl;  // out of range
            }
        } else {  // input failed (not an int)
            cout << error << endl;
            cin.clear();  // clear the fail state
        }

        cin.ignore(1000, '\n');
    }
}
