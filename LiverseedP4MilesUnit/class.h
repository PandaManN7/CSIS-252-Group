#ifndef MilesUnit_H
#define MilesUnit_H
#include<string>
#include<iostream>



class MilesUnit{
	public:
				//constructors
		MilesUnit(float num);
		MilesUnit();

		float getUnits();   			//getter/setter declarations
		void setUnits(const float num);

		void setName(std::string uName);
		std::string getName();
		

		MilesUnit(MilesUnit &obj);

		bool operator==(MilesUnit unit);	//bool declarations
		bool operator!=(MilesUnit unit);
		bool operator>(MilesUnit unit);
		bool operator<(MilesUnit unit);
		bool operator<=(MilesUnit unit);
		bool operator>=(MilesUnit unit);

		friend std::ostream &operator<<(std::ostream &output, MilesUnit &mu); //cin/out declare
		friend std::istream &operator>>(std::istream &input, MilesUnit &mu);



	private:	//unit declare
		float units;
		std::string unitName;
};

#endif