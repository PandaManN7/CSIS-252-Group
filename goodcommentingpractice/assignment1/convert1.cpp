
/*
    Description: We were assigned in our csis 252 course to complete a C++ program that converts units of our choice. I choose to use jiffys converted to seconds or vice versa. 
*/

// author= "Andrew Schonnesen";
// date = "08/28/2021";


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Data types used

    bool jiffy_to_s = true;
    int jiffy;
    int s;
    int input_number = 1;

    // our loop

    while (input_number == 1) {

        //asking user for conversion type

        cout << "Choose from the following:" << endl
                << "(1) jiffy to seconds" << endl
                << "(2) Seconds to jiffy" << endl
                << "Type in the corresponding number, 1 or 2: " << endl;
        
        // Input value and if 1? then jiffy to seconds is true else false

        cin >> input_number;

        if (input_number == 1) {
            jiffy_to_s = true;

        } else {
            jiffy_to_s = false;
        }

        // Runs each depending on if jiffy_to_s is true or false

        if (jiffy_to_s) {
            cout << "Please enter in the number of jiffys you'd like to convert: " << endl;
            cin >> jiffy;
            double s = jiffy * .0167;

            // My solution for having two decimal places
            cout << setprecision (2) << fixed << jiffy << " jiffy is " << s << " seconds." << endl;

        } else {
            cout << "Please enter in the number of seconds you'd like to convert: " << endl;
            cin >> s;
            jiffy = s * 60;
            cout << s << " seconds is " << jiffy << " jiffys." << endl;
        }

        cout << "Choose from the following: " << endl
                << "(1) to convert again" << endl
                << "(2) to quit program" << endl
                << "Type in the corresponding number, 1 or 2: " << endl;

        cin >> input_number;
        
        };

    // return 0 if everything ran smoothly

    return 0;
}
