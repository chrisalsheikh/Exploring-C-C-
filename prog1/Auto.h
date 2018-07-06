#pragma once
#include <iostream>
#include <string>
using namespace std;

class Auto
{
public:

	// default constructor
	Auto();							

	// explicit value constructor
	Auto(string makeInput, string modelInput, string typeInput, int yearInput, float SafeRatngNpt);		

	// desctructor
	~Auto();						

	// prints automobile stats
	void printAutoStats();

	// ----mutators----
	void setMake(string mkNpt);

	void setModel(string mdl);

	void setType(string tp);

	void setYear(int yr);

	void setSaftyRtng(float sftyRtng);

	// ----accessors----
	string getMake();

	string getModel();

	string getType();
private:

	// data members
	string make, model, type;		
	int year;						 
	float safetyRating;				
};
