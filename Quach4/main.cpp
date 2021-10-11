// File:      <prog4>
// Name:      <Johnny Quach>
// Class:     <CSIS 252>
// Program:   <Assignment 4>
// Date:      <10/1/2021>

//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "classInFt.h"


using namespace std;

//I finished this program before you sent me the email describing what you were looking for with this assignment. I unfortunately did not have much more time to go back and fix some things, but I hope this is acceptable.
//main of the program

int main()
{
cout<<setprecision(4);
string len;
footInType measurement0;
footInType measurement1;
footInType measurement2;
footInType measurement3;
footInType measurement4;
footInType measurement5;

cout<<"Default constructor, that set is to zero"<<endl;

measurement0.printOutput();
cout<<"*************************************"<<endl;
cout<<"Constructor takes in a number"<<endl;
measurement1.setFtInType();

cout<<"*************************************"<<endl;
cout<<"Getter of the class for measurement1:"<<endl;
cout<<"Measurement 1 ft: "<<measurement1.getLengthFt()<<endl;
cout<<"Measurement 1 in: "<<measurement1.getLengthIn()<<endl;

cout<<"*************************************"<<endl;
cout<<"Getter and setter of the class for type 2 and 3:"<<endl;
measurement2.setLengthFt(15);
cout<<"Measurement 2 set 15 for ft: "<<measurement2.getLengthFt()<<endl;
cout<<"Measurement 2 after being set for in: "<<measurement2.getLengthIn()<<" in"<<endl;
measurement2.printOutput();

cout<<"*************************************"<<endl;
measurement3.setLengthIn(15);
cout<<"Measurement 3 set 15 for in: "<<measurement3.getLengthIn()<<endl;
cout<<"Measurement 3 after being set for in: "<<measurement3.getLengthFt()<<" ft"<<endl;
measurement3.printOutput();

cout<<"*************************************"<<endl;
cout<<"To set the values of measurements 4 and 5"<<endl;
cout<<"Measurement 4"<<endl;
measurement4.setFtInType();
measurement4.printOutput();

cout<<"*************************************"<<endl;
cout<<"Measurement 5"<<endl;
measurement5.setFtInType();
measurement5.printOutput();

cout<<"*************************************"<<endl;
cout<<"To determine relationship of measurement 4 and 5"<<endl;
if (measurement4==measurement5){
cout<<"Yes 4 == 5"<<endl;
}
else if (measurement4<measurement5){
cout<<"Yes 4 > 5"<<endl;
}
else if (measurement4>measurement5){
cout<<"Yes 4 < 5"<<endl;
}

cout<<"*************************************"<<endl;
cout<<"overloaded assignment measurement4=measurement5"<<endl;
measurement4=measurement5;
cout<<"Measurement 4"<<endl;
measurement4.printOutput();

cout<<"*************************************"<<endl;
cout<<"copy constructor footInType measurement6=measurement5"<<endl;
footInType measurement6=measurement5;
measurement6.printOutput();


return 0;
}
