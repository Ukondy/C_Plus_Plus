#include <string>
#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

#if 0
class Human {
public:
	Human(string name) {
		this->name = name;
		this->age = 0;
		this->weight = 0;
	}
	Human(string name, int age):Human(name) {
		this->age = age;
	}
	Human(string name,int age, int weight):Human(name, age) {
		this->weight = weight;
	}

	string name;
	int age;
	int weight;
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 