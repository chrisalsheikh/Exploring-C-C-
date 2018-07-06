#include "Auto.h"

Auto::Auto ()
{
	make = "No data";
	model = "No data";
	type = "No data";
	year = 0;
	safetyRating = 0;
}


Auto::~Auto()
{
}

Auto::Auto (string makeInput, string modelInput, string typeInput, int yearInput, float SafeRatngNpt) {

	make = makeInput; 
	model = modelInput;
	type = typeInput; 
	year = yearInput; 
	safetyRating = SafeRatngNpt;
}

void Auto::printAutoStats() {			// prints automobile stats

	cout << "Automotive Stats: " << endl;
	cout << "\t Make: " << make << endl;
	cout << "\t Model: " << model << endl;
	cout << "\t Year: " << year << endl;
	cout << "\t Type: " << type << endl;
	cout << "\t safetyRating: " << safetyRating << endl;

}

// mutators
void Auto::setMake(string mkNpt) { make = mkNpt; }

void Auto::setModel(string mdl) { model = mdl; }

void Auto::setType(string tp) { type = tp; }

void Auto::setYear(int yr) { year = yr; }

void Auto::setSaftyRtng(float sftyRtng) { safetyRating = sftyRtng; }

// accessors
string Auto::getMake() { return make; }

string Auto::getModel() { return model; }

string Auto::getType() { return type; }
