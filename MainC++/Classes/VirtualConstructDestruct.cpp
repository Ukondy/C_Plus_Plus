#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class A {
public:
	A() {
		cout << "выделена динамическая память обьекта А" << endl;
	}
	virtual ~A() = 0;

};

A::~A() {};

class B : public A {
public:
	B() {
		cout << "выделена динамическая память обьекта B" << endl;
	}
	~B() override {
		cout << "освобождена динамическая память обьекта B" << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 