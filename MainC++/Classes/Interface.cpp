#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0 
class IBicycle {
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};

class SimpleBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		cout << "method TwistTheWheel() SimpleBicycle" << endl;
	}
	void Ride() override {
		cout << "method Ride() SimpleBicycle" << endl;
	}
};

class SportBicycle : public IBicycle {
public:
	void TwistTheWheel() override {
		cout << "method TwistTheWheel() SportBicycle" << endl;
	}
	void Ride() override {
		cout << "method Ride() SportBicycle" << endl;
	}
};

class Human {
public:
	void RineOn(IBicycle& bicycle) {
		cout << "Twisting wheel" << endl;
		bicycle.TwistTheWheel();
		cout << endl << "Let's go" << endl;
		bicycle.Ride();
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;

}
#endif 