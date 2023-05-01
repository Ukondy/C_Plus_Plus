#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
void Foo(int value) {
	if (value < 0) {
		throw exception("число меньше 0 !!!");
	}

	if (value == 1) {
		throw exception("число = 1 !!!");
	}
	cout << "Переменная = " << value << endl;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	try {
		Foo(55);
		Foo(-12);
		Foo(1);
	}
	catch (const exception& ex) {
		cout << "Блок 1 мы поймали " << ex.what() << endl;
	}
	catch (const char* ex) {
		cout << "Блок 3 мы поймали " << ex << endl;
	}
	catch (...) {
		cout << "Блок 4 что-то полшо не так" << endl;
	}

	return 1;
}
#endif 