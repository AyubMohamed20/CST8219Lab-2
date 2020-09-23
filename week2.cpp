#include<iostream>
using namespace std;

class Vehicle {
	int numWheels, numDoors;
public:
	Vehicle();
	Vehicle(int);
	Vehicle(int, int);
};

Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
}

Vehicle::Vehicle(int w) {
	Vehicle(4, w);
}

Vehicle::Vehicle() {
	Vehicle(4);
}

int main(int argc, char** argv)
{
	cout << "Hello World!" << endl;
	return 0;
}