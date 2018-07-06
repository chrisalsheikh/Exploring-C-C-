#include <iostream>
#include <string>
#include "Auto.h"
using namespace std;


int main() {

	Auto car1;
	car1.setMake("Hummer");
	car1.setModel("H3");
	car1.setType("SUV");
	car1.setYear(2011);
	car1.setSaftyRtng(3.9);
	car1.printAutoStats();
	

	cout << endl << endl;

	Auto car2("Honda", "civic", "sedan", 2013, 4.5);
	car2.printAutoStats();

	string temp;
	temp = car2.getType();

	cout << temp << endl;

	return 0;
}