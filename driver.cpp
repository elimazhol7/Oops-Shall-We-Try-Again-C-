#include <iostream>
#include "input_prot.h"
using namespace std;

int main() {
    int number = getInput("Enter number (0-100): ", "Invalid! Try again: ", 0, 100);
    cout << "Number entered: " << number << endl;
    return 0;
}
