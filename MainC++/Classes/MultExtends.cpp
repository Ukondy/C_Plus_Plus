#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class Car {
public:

	Car()
	{
		cout << "Car's constructor was call" << endl;
	}
	

	void Use() {
		cout << "I'm driving!" << endl;
	}
};

class AirPlane {
public:
	AirPlane()
	{
		cout << "Airplane's constructor was call" << endl;
	}

	void Use() {
		cout << "I'm Flying!" << endl;
	}
};

class FlyingCar : public Car, public AirPlane {
public:
	FlyingCar()
	{
		cout << "FlyingCar's constructor was call" << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	Car car;
	AirPlane ap;
	FlyingCar fc;

	car.Use();
	ap.Use();
	// fc.Use(); Error 


	return 1;

}
#endif 