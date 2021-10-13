#ifndef H_dogyears
#define H_dogyears

#include<string>
#include<iostream>


using namespace std;


class DYUnit{
	public:
		
		// Initalize Constructors

		DYUnit(float num);
		DYUnit();

		// Getters and Setters

		float getUnits();   			
		string getName();
		void setName(string newName);
		void setUnits(const float num);
		
		// Copier

		DYUnit(DYUnit &obj);

		// relational operators overloaded

		bool operator==(DYUnit unit);
		bool operator!=(DYUnit unit);
		bool operator>(DYUnit unit);
		bool operator<(DYUnit unit);
		bool operator<=(DYUnit unit);
		bool operator>=(DYUnit unit);

		// input and output

		friend ostream &operator<<(ostream &output, DYUnit &mu); 
		friend istream &operator>>(istream &input, DYUnit &mu);

	private:	

		float units;
		string unitName;
};

#endif