#include<iostream>
using namespace std;

class Vehicle {
	int numWheels, numDoors;
public:
	Vehicle(int w, int d) {
		cout << "In constructor with 2 parameters" << endl;
		numWheels = w;
		numDoors = d;
	}

	Vehicle(int w) {
		cout << "In constructor with 1 parameters, wheels = " << w << endl;
		Vehicle(4, w);
	}

	Vehicle(void) {
		cout << "In constructor with 0 parameters" << endl;
		Vehicle(4);
	}

	~Vehicle() {
		cout << "In destructor" << endl;
	}
};

int main(int argc, char** argv)
{
	Vehicle  myVehicle(4);
	cout << "I made a Vehicle!" << endl;
	return 0;
}