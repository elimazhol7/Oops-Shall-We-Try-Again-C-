// input_prot.cpp
#include <iostream>
#include "input_prot.h"
using namespace std;

int getInput(const char* prompt, const char* error, int min, int max) {
    int value;
    cout << prompt;
    cin >> value;

    while (value < min || value > max) {
        cout << error;
        cin >> value;
    }
    return value;
}
