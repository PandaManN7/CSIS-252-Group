#include <string>
#include "dogyears.h"


using namespace std;

// default constructors

DYUnit::DYUnit(){	
	units=0;
	unitName="dys"; 
};

DYUnit::DYUnit(float num){
	units = num;		
	unitName="dys"; 
};


// getters and setters 

float DYUnit::getUnits(){
	return units;
};

void DYUnit::setUnits(const float num){ //setter
 	units = num;
};

void DYUnit::setName(string newName){ //setter for name. Only if proper name enter

	string nameArray [4] = {"dy", "dogyear", "dys", "dogyears"};

	bool trueOrFalse = false;

	for(const string &name : nameArray)
		if (newName == name) {
			unitName = newName;
			trueOrFalse = true;
		}

	if (trueOrFalse) {
		cout << "Unit name " << newName << " has been successfully set" << endl;
	} else {
		cout << "Unit name is invalid" << endl;
	}
};



string DYUnit::getName(){
	return unitName;
};


// deep copy constructor

DYUnit::DYUnit(DYUnit &obj){ 
	units = obj.getUnits();
	unitName = obj.getName();
};


// relational operators

bool DYUnit::operator==(DYUnit unit){	
	return((units == unit.getUnits()));
};

bool DYUnit::operator!=(DYUnit unit){
	return((units != unit.getUnits()));
};

bool DYUnit::operator>(DYUnit unit){
	return((units > unit.getUnits()));
};

bool DYUnit::operator<(DYUnit unit){
	return((units < unit.getUnits()));
};

bool DYUnit::operator<=(DYUnit unit){
	return((units <= unit.getUnits()));
};

bool DYUnit::operator>=(DYUnit unit){ 
	return((units >= unit.getUnits()));
};


// inputs and outputs overload

ostream &operator << (ostream &output, DYUnit &mu){ 
	output << "units: " << mu.getUnits() <<  "\nName: " << mu.getName();
	return output;

};


istream &operator>>(istream &input, DYUnit &mu) {
	
	cout << "please enter units: ";
	input >> mu.units;
	cout << "Enter name of unit: ";
	input >> mu.unitName;
	
	return input;

};

