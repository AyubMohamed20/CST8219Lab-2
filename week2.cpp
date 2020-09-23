#include<iostream>
using namespace std;


class Vehicle {
	int numWheels, numDoors;
public:
	Vehicle();
	Vehicle(int);
	Vehicle(int, int);

	Vehicle::Vehicle(int w, int d) {
		cout << "In constructor with 2 parameters" << endl;
		numWheels = w;
		numDoors = d;
	}

	Vehicle::Vehicle(int w) {
		cout << "In constructor with 1 parameters, wheels = " << w << endl;
		Vehicle(4, w);
	}

	Vehicle::Vehicle() {
		cout << "In constructor with 0 parameters" << endl;
		Vehicle(4);
	}

	~Vehicle() {
		cout << "In destructor" << endl;
	}
};

int main(int argc, char** argv)
{
	cout << "Hello World!" << endl;
	return 0;
}