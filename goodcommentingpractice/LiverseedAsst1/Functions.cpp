#include <iostream>
#include<iomanip>
using namespace std;

double humanToDog(double years){ //Converts human years to dog years
    return (years * 15);
}

double dogToHuman(double years){ //Converts Dog years to human years
    double x,y;
    x=1,y=15;
    return (years * (x/y));
}

bool validUserInput(int input){ //Determines if user input is valid. If invalid, ends program because I'm lazy
    if(input == 1 || input ==2){
        return true;
    }
    else{
        cout<<"Invalid user input \n";
        return false;
    }
}
