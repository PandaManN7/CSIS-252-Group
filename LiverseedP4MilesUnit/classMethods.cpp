#include<string>
#include "class.h"
using namespace std;



MilesUnit::MilesUnit(){	//default const
	units=0;
	unitName="Miles"; 
};

MilesUnit::MilesUnit(float num){
	units = num;		//regular const
	unitName="Miles"; 
};

float MilesUnit::getUnits(){ //getter
	return units;
};

void MilesUnit::setUnits(const float num){ //setter
 	units = num;
};

void MilesUnit::setName(string uName){ //setter for name. Only if proper name enter
	if(uName=="Mi"||uName=="Mile"||uName=="Miles"||uName=="miles"||uName
	=="mi"||uName=="mile"){
		unitName = uName;
	}else{
		uName="Miles";
		cout<<"Improper name, setting to Miles\n";
	}
};

string MilesUnit::getName(){ //getter for name
	return unitName;
};


MilesUnit::MilesUnit(MilesUnit &obj){ //deep copy constructor
	units = obj.getUnits();
	unitName = obj.getName();
};

bool MilesUnit::operator==(MilesUnit unit){	//bool overload
	return((units == unit.getUnits()));

};

bool MilesUnit::operator!=(MilesUnit unit){
	return((units != unit.getUnits()));
};

bool MilesUnit::operator>(MilesUnit unit){
	return((units > unit.getUnits()));
};

bool MilesUnit::operator<(MilesUnit unit){
	return((units < unit.getUnits()));
};

bool MilesUnit::operator<=(MilesUnit unit){
	return((units <= unit.getUnits()));
};

bool MilesUnit::operator>=(MilesUnit unit){ //bool overload
	return((units >= unit.getUnits()));
};


std::ostream &operator<<(std::ostream &output, MilesUnit &mu){ //cout overload
	output << mu.getUnits() <<" "<< mu.getName();
	return output;

};


std::istream &operator>>(std::istream &input, MilesUnit &mu){ //cin overload
	int num;
	string name;
	cout<<"Enter ammount of units ";
	cin>>num;
	cout<<"Enter name of unit ";
	cin>>name;
	mu.setUnits(num);
	mu.setName(name);

};

