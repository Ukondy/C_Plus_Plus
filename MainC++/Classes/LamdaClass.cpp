#include <string>
#include <iostream>
#include <array>
#include <windows.h>

using namespace std;

#if 0
class MyClass {
public:
	int a = 11;
	void Msg() {
		cout << "msg" << endl;
	}

	void Lampda() {
		auto f = [this]() {
			this->Msg();
		};
		f();
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	int a = 55;
	int b = 10;

	auto f = [a, b]/* = - по значению & - по ссылке */()mutable
	{
		cout << a << endl;
		a = 1313;
		cout << b << endl;
		b = 11;
	};

	f();

	MyClass mc;
	mc.Lampda();

	auto f2 = []()->float {
		return 2.23;
	};

	auto result = f2();

	return 1;
}
#endif 