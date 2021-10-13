//Author: Mason Voxland
//Filename: weekType.cpp
//Date: 10/7
//CSIS 252 Assignment 4

//Description: This file contains the implementation for the weekType class, which is used to store an int value for week(s).
//             Also supports comparator operators, insertion/extraction operators, getters/setters, and constructors.


#include "weekType.h"
#include <sstream>

using namespace std;

//default constructor
weekType::weekType(){
    val = 0;
}

//constructor if given an int
weekType::weekType(int value){
    val = value;
}

//copy constructor
weekType::weekType(const weekType &oldObj){
    val = oldObj.getWeeks();
}

//overloaded assignment
void weekType::operator= (const weekType &oldObj){
    val = oldObj.getWeeks();
}

//gets the number of weeks stored in the class instance.
int weekType::getWeeks() const{
    return val;
}

//sets the number of weeks stored in the class instance.
void weekType::setWeeks(int value){
    val = value;
}

//gets unit name ("Week")
string weekType::getUnit() const{
    return unit_name;
}

//gets unit abbreviated form ("wk")
string weekType::getUnit_abbreviation() const{
    return unit_abbreviated;
}

//gets unit plural form ("Weeks")
string weekType::getUnit_plural() const{
    return unit_plural;
}


//overloads equal to operator
bool weekType::operator == (const weekType& w) const{
    return getWeeks() == w.getWeeks();
}

//overloads not equal to operator
bool weekType::operator != (const weekType& w) const{
    return not(*this == w);
}

//overloads less than operator
bool weekType::operator < (const weekType& w) const{
    return getWeeks() < w.getWeeks();
}

//overloads less than or equal to operator
bool weekType::operator <= (const weekType& w) const{
    return not(*this > w);
}

//overloads greater than operator
bool weekType::operator > (const weekType& w) const{
    return getWeeks() > w.getWeeks();
}

//overloads greater than or equal to operator
bool weekType::operator >= (const weekType& w) const{
    return not(*this < w);
}


//overloads extraction operator
ostream& operator << (ostream& o,const weekType& w){
    //checks to determine if the unit should be singular...
    if (w.getWeeks() == 1){
        o << w.getWeeks() << ' ' << w.getUnit();
        return o;
    }
    //or plural
    else{
        o << w.getWeeks() << ' ' << w.getUnit_plural();
        return o;
    }
     
}

//overloads insertion operator
istream& operator >> (istream& in,weekType& w){
    string tmpNum;
    string tmpUnit;

    //read in the data in form ex. "6 Weeks"
    in >> tmpNum >> tmpUnit;
    
    if (w.getUnit() == tmpUnit || w.getUnit_plural() == tmpUnit || w.getUnit_abbreviation() == tmpUnit){
        //convert tmpNum into an int so it can be put into weektype
        stringstream myStrea(tmpNum);
        int tmpUnit2;
        myStrea >> tmpUnit2;
        
        w.setWeeks(tmpUnit2);
    }
    return in;
}