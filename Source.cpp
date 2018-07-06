#include <iostream>
#include <string>
using namespace std;

class Auto {

public:

	void printAutoStats() {			// prints automobile stats

		cout << "Automotive Stats: " << endl;
		cout << "\t Make: "  << make << endl;
		cout << "\t Model: " << model << endl;
		cout << "\t Year: " << year << endl;
		cout << "\t Type: " << type << endl;
		cout << "\t safetyRating: " << safetyRating << endl;
	
	}

	string make, model, type;		// make and model of automobile
	int year;						// year 
	float safetyRating;				// safety rating
};

int main() {

	Auto car1;

	car1.make = "Toyota";
	car1.model = "Tacoma";
	car1.year = 2017;
	car1.type = "Truck";
	car1.safetyRating = 4.5;

	car1.printAutoStats();

	
	return 0;
}