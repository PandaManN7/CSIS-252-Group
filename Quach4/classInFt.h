#ifndef _CLASSINFT_H_
#define _CLASSINFT_H_
#include <fstream>
//g++ main.cpp InFoot.cpp
using namespace std;

class footInType
{
public:
	
	footInType(footInType&);//copy constructor done
	footInType(double foot,double in);//Take in  numbers
	footInType(); //Default constructor 	
	void setLengthFt(double); // Setter for feet
	double getLengthFt(); // Getter for feet
	void setLengthIn(double); // Setter for inches
	double getLengthIn(); // Getter for inches 
	void setNameFt(string); // Setter for the name of feet
	void setNameIn(string); // Setter for the name of inches
	string getNameFt(); //Getter for the name of feet
	string getNameIn(); //Getter for the name of inches
	void printOutput(); // To display feet and inches
	void setFtInType(); // To choose inches or feet
	void covIn(); //converts inches into feet
	void covFt(); //converts feet to inches
	void operator =(footInType&);// Done overloaded assignment
	void checkFT();	//To check if foot is a double
	void checkIN();	//To check if inch is a dobule
	//True False operators
	bool operator ==(footInType&);
	bool operator !=(footInType&);
	bool operator >=(footInType&);
	bool operator <=(footInType&);
	bool operator >(footInType&);
	bool operator <(footInType&);
	//If needed to add later
	//void operator +(footInType&);
	//void operator -(footInType&);
	//void operator *(footInType&);
	//void operator /(footInType&);
	//void operator +(footInType&);
private:
	//Variables
	int tmpNum=0,tmp1=0;
	double foot,in,tmp=0,len2,len1,len4;
	string covType,name1,name2;
	
	
	
};

#endif		

