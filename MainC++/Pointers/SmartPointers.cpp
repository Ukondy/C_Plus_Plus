#include <string>
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

#if 0
template<typename T>
class SmartPointer {
private:
	T *ptr;

public:
	SmartPointer(T *ptr) {
		this->ptr = ptr;
		cout << "constructor" << endl;
	}

	~SmartPointer() {
		delete ptr;
		cout << "destructor" << endl;
	}

	T& operator *() {
		return *ptr;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	SmartPointer<int> pointer = new int(5);

	*pointer = 124335;

	cout << *pointer << endl;

	return 1;
}
#endif 