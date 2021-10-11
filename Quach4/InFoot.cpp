#include <iostream>
#include <iomanip>
#include "classInFt.h"
#include<cmath>
#include<cctype>
#include<locale>
#include<string>
#include<algorithm>

using namespace std;
//take in number and string
footInType::footInType(double foot,double in){
setLengthFt(foot);
if (foot==0){
	setLengthIn(in);
}
}

//Default
footInType::footInType(){
setLengthFt(0);
setLengthIn(0);
}

//copy constructor
footInType::footInType(footInType &tmp){ 
setLengthFt(tmp.getLengthFt());
setLengthIn(tmp.getLengthIn());
footInType(tmp.getLengthFt(),tmp.getLengthIn());
}

// to display the output
void footInType::printOutput(){
cout<<"Foot length:"<<getLengthFt()<<endl;
cout<<"Inch length:"<<getLengthIn()<<endl;
}

// overloaded assignment
void footInType::operator=(footInType& tmp){ 
setLengthIn(tmp.getLengthIn());
setLengthFt(tmp.getLengthFt());
}


// overloaded == 
bool footInType::operator==(footInType& tmp){
return (getLengthFt()==tmp.getLengthFt() and getLengthIn()==tmp.getLengthIn());
}

// overloaded >
bool footInType::operator>(footInType& tmp){
return (getLengthFt()>tmp.getLengthFt() and getLengthIn()>tmp.getLengthIn());
}

// overloaded <
bool footInType::operator<(footInType& tmp){
return (getLengthFt()<tmp.getLengthFt() and getLengthIn()<tmp.getLengthIn());
}

// overloaded <=
bool footInType::operator<=(footInType& tmp){
return (getLengthFt()<=tmp.getLengthFt() and getLengthIn()<=tmp.getLengthIn());
}

// overloaded >=
bool footInType::operator>=(footInType& tmp){
return (getLengthFt()>=tmp.getLengthFt() and getLengthIn()>=tmp.getLengthIn());
}

// overloaded !=
bool footInType::operator!=(footInType& tmp){
return (getLengthFt()!=tmp.getLengthFt() and getLengthIn()!=tmp.getLengthIn());
}

//choose the input of the measurement
void footInType::setFtInType(){

while (tmp!=1)
{
	string len;
	cout<<"Enter either foot or inch to start conversion:";
	cin>>len;
	transform(len.begin(),len.end(),len.begin(),::tolower);
	if (len=="foot" or len=="ft" or len=="feet")
	{	
		checkFT();
		setLengthFt(len1);
		setNameFt(len);
		tmp=1;		
	}
	else if (len=="inch" or len=="in" or len=="inches")
	{
		checkFT();
		setNameIn(len);
		setLengthIn(len2);
		tmp=1;
		
	}
}
}

//To check if foot is a double
void footInType::checkFT(){
while (tmp1!=1){
	string tmpLen1,pr=".";
	
	cout<<"Foot length:";
	cin>>tmpLen1;
	int ct=0;
	for (int i=0;i<tmpLen1.length();i++){
			
		if (isdigit(tmpLen1[i])){
			ct++;			
			len1=stod(tmpLen1);			
			tmp1=1;
				
		}	
	}
}
}

//To check if inch is a double  
void footInType::checkIN(){
while (tmp1!=1){
	string tmpLen2;
	cout<<"In length:";
	cin>>tmpLen2;
	int ct=0;
	for (int i=0;i<tmpLen2.length();i++){
		
		if (isdigit(tmpLen2[i])){
			ct++;		
			len2=stod(tmpLen2);			
			tmp1=1;
				
		}	
	}
}
}


// setter feet
void footInType::setLengthFt(double len1){
foot=len1;
covFt();
}

// setter inches
void footInType::setLengthIn(double len2){
in=len2;
covIn();
}

//getter feet
double footInType::getLengthFt(){

return(foot);
}

//getter inches
double footInType::getLengthIn(){

return(in);
}

//setter name of feet
void footInType::setNameFt(string tmp1){
name1=tmp1;
}

//setter name of inches
void footInType::setNameIn(string tmp2){
name2=tmp2;
}

//getter name of feet
string footInType::getNameFt(){
return (name1);
}
//getter name of inches
string footInType::getNameIn(){
return (name2);
}
// to convert to feet
void footInType::covIn(){
foot=(getLengthIn())/12;
}
// to convert to inches
void footInType::covFt(){
in=(getLengthFt())*12;
}
