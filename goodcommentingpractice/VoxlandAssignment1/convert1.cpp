// Author: Mason Voxland
// Class: CSIS 252
// Date: 8/27/2021

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool run_again = true;
    int user_choice;
    bool is_yards_to_fields;
    float num_for_conversion;
    float converted_answer;


    while (run_again){
        //prints a menu for the user to choose a conversion direction
        cout << "Choose from the following, and input the number of choice:" << endl
         << "1. yards to football fields" << endl
         << "2. football fields to yards" << endl;

        cin >> user_choice; //user inputs choice

        if (user_choice == 1){is_yards_to_fields = true;};          //these two lines are just
        if (user_choice == 2){is_yards_to_fields = false;};         //for turning int choice to bool

        //converts the units and outputs a formatted conversion.
        if (is_yards_to_fields) {
            cout << "Please enter in the number of yards to be converted to football fields" << endl;
            cin >> num_for_conversion;

            converted_answer = num_for_conversion / 100;

            cout << num_for_conversion << " yards is equal to " << fixed << setprecision(2) << converted_answer << " football fields." << endl;
        } else{
            cout << "Please enter in the number of fotball fields to be converted to yards" << endl;
            cin >> num_for_conversion;

            converted_answer = num_for_conversion * 100;

            cout << num_for_conversion << " football fields is equal to " << fixed << setprecision(2) << converted_answer << " yards." << endl;
        };
        
        //asks if the user wants to convert annother number.
        cout << "Choose from the following, and input the number of choice:" << endl
             << "1. convert again" << endl
             << "2. exit" << endl;
        //takes an input of their choice.
        cin >> user_choice;
        //if they do not want to convert again. If not, it ends the program.
        if (user_choice == 2){run_again = false;}
    }

}