// driver.cpp
#include <iostream>
#include "input_prot.h"
using namespace std;

int main() {
    int grade = getInput("Enter grade (0-100): ", "Invalid! Try again: ", 0, 100);
    cout << "Grade entered: " << grade << endl;
    return 0;
}
