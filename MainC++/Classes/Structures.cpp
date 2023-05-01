#include <string>
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

#if 0
class MyClass1 {
public:
	int a = 10;
};

class MyClass2 : MyClass1 {
	
};

struct MyStruct1 {
	int a = 22;
};

struct MyStruct2 : MyStruct1 {

};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	MyClass1 m;
	MyClass2 m2;
	MyStruct1 ms;
	MyStruct2 ms2;

	m.a;
	//	m2.a; error
	ms.a;
	ms2.a;

	return 1;

}
#endif 