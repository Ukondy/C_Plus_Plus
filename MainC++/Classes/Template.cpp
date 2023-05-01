#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class Point {
private:
	int x = 0;
	int y = 0;
	int z = 0;
public:
	Point() {
		x = y = z = 0;
	}
	Point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

template<typename T1, class T2>
class MyClass {
public:
	MyClass(T1 value, T2 value2) {
		this->value = value;
		this->value2 = value2;
	}

	void DataTypeSize() {
		cout << "value " << sizeof(value) << endl;
		cout << "value2 " << sizeof(value2) << endl;
	}

	T1 Foo() {
		return value;
	}

private:
	T1 value;
	T2 value2;
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	int a = 5;
	Point p;
	MyClass<int, Point> mc(a, p);
	mc.DataTypeSize();

	int b = mc.Foo();

	return 1;

}
#endif 