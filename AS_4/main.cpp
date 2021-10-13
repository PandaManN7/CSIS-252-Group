#include<iostream>
#include "dogyears.h"



int main(){


	DYUnit dogYears1(5); // REGULAR WITH PARAMETERS
	DYUnit dogYears2(dogYears1); // COPY
	DYUnit dogYears3; // BLANK
	DYUnit dogYears4; // BLANK

	cout << "\n----------------Start---------------------\n" << endl;

	cout << dogYears1 << endl;
	cout << dogYears2 << endl;
	cout << dogYears3 << endl;

	cout << "\n-----------------Using Setters---------------------\n" << endl;

	dogYears1.setName("doggyears"); 
	dogYears1.setName("dys"); 
	dogYears1.setUnits(50); 

	cout << dogYears1 << endl;
	cout << dogYears2 << endl;
	cout << dogYears3 << endl;

	dogYears3.setUnits(5);

	cout << "\n------------------Relational Operators--------------------\n" << endl;

	if(dogYears2 == dogYears3){
		cout<<"dogYears2 == dogYears3"<<endl;
	}
	if(dogYears1 != dogYears3){
		cout<<"dogYears1 != dogYears3"<<endl;
	}
	if(dogYears1 > dogYears3){
		cout<<"dogYears1 > dogYears3"<<endl;
	}
	dogYears3.setUnits(1);

	if(dogYears3 < dogYears2){
		cout<<"dogYears3 > dogYears2"<<endl;
	}

	cout << "\n------------------Insertion and Extraction--------------------\n" << endl;

	cout << dogYears1 << endl;
	cout << dogYears2 << endl;
	cout << dogYears3 << endl;

	cout << dogYears1.getName() << endl; 
	cout << dogYears1.getUnits() << endl;

	// shows that the default values are still there and the output "<<" is working

	cout<< dogYears4 << endl;

	cin >> dogYears4;

	// shows that << output is working

	cout << dogYears4 << endl;

	cout << "-----------------End---------------------" << endl;

	return 0;
};