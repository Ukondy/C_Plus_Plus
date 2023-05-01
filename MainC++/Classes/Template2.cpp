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

template<class T1>
class TypeSize {
public:
	TypeSize(T1 value) {
		this->value = value;
	}

	void dataTypeSize() {
		cout << "value " << sizeof(value) << endl;
	}

protected:
	T1 value;
};

template<class T1>
class TypeInfo : public TypeSize<T1> {
public:
	TypeInfo(T1 value):TypeSize<T1>(value)
	{
	
	}

	void ShowTypeName() 
	{
		cout << "Название типа: " << typeid(this->value).name() << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	Point a;

	TypeInfo<Point> ti(a);
	ti.ShowTypeName();
	ti.dataTypeSize();

	return 1;
}
#endif 