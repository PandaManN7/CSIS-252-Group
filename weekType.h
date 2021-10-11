//Author: Mason Voxland
//Filename: weekType.h
//Date: 10/7
//CSIS 252 Assignment 4

//Description: This file contains the specification for the weekType class, which is used to store an int value for week(s).
//             Also supports comparator operators, insertion/extraction operators, getters/setters, and constructors.


#ifndef _WEEKTYPE_H_
#define _WEEKTYPE_H_

#include <string>
#include <iostream>
using namespace std;

class weekType{
    private:
        //stores the number of week(s)
        int val;
        //stores the normal unit name "Week"
        string unit_name = "Week";
        //stores the abbreviated unit name "wk"
        string unit_abbreviated = "wk";
        //stores the plural unit name "Weeks"
        string unit_plural = "Weeks";

    public:
        //default constructor
        //Postconditions: initialized weekType with value 0.
        weekType();
        //constructor when given an int
        //Preconditions: is given an int as an argument
        //Postconditions: initialized weekType with value of the given int.
        weekType(int value);
        //copy constructor
        //Preconditions: is given a weekType as an argument
        //Postconditions: initialized weekType with value of the given weekType.
        weekType(const weekType &oldObj);
        //overloaded assignment
        //Preconditions: left side weekType is already initialized.
        //Postconditions: sets left weekType's value to the right weekType's value.
        void operator= (const weekType &oldObj);
        
        //gets the number of weeks stored in the class instance.
        //Postconditions: returns int of the stored number of weeks.
        int getWeeks() const;
        //sets the number of weeks stored in the class instance.
        //Preconditions: is given an int as an argument.
        //Postconditions: class instance's value is set to the given int.
        void setWeeks(int value);
        //gets unit name ("Week")
        //Postconditions: returns a string ("Week")
        string getUnit() const;
        //gets unit abbreviated form ("wk")
        //Postconditions: returns a string ("wk")
        string getUnit_abbreviation() const;
        //gets unit plural form ("Weeks")
        //Postconditions: returns a string ("Weeks")
        string getUnit_plural() const;

        //overloads equal to operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator == (const weekType&) const;
        //overloads not equal to operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator != (const weekType&) const;
        //overloads less than operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator < (const weekType&) const;
        //overloads less than or equal to operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator <= (const weekType&) const;
        //overloads greater than operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator > (const weekType&) const;
        //overloads greater than or equal to operator
        //Preconditions: is used as if comparing ints during normal use in a program.
        //Postcondition: returns 0 or 1.
        bool operator >= (const weekType&) const;

        //overloads extraction operator
        //Preconditions: is used as normal
        //Postconditions: returns a stream of form "<int> <unit>" where unit is the correct singular/plural form.
        friend ostream& operator << (ostream&,const weekType&);
        //overloads insertion operator
        //Preconditions: is used as normal, inputted in form ex. "6 weeks."
        //Postconditions: returns the given stream unchanged, and changes given weekType's value to the input.
        friend istream& operator >> (istream&,weekType&);

};

#endif