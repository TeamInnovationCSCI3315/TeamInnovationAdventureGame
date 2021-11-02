#include <iostream>
#include <cstdlib>
#include <string>
#include "InputValidation.h"
using namespace std;
int InputValidation::inputValidation()
 {
    int input = -1;
    bool valid = false;
    do
    {

        cout << endl << "Choose an Option: " << flush;
        cin >> input;
        if (cin.good())
        {
            //everything looks good, exit the loop
            valid = true;
        }
        else
        {
            //Input is invalid, buffer state is reset
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, Please try again: " << endl;
        }
    } while (!valid);

    return (input);
    }