#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class MyException : public exception {
private:
	int dataState;

public:
	MyException(const char* msg, int dataState) :exception(msg) {
		this->dataState = dataState;
	}
	int getDataState() {
		return dataState;
	}
};

void Foo(int value) {
	if (value < 0) {
		throw exception("число меньше 0 !!!");
	}

	if (value == 1) {
		throw MyException("число = 1 !!!", value);
	}
	cout << "Переменная = " << value << endl;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	try {
		Foo(55);
		Foo(1);
	}
	catch (MyException& ex) {
		cout << "Блок 1 мы поймали " << ex.what() << endl;
		cout << "Состояние данных" << ex.getDataState() << endl;
	}
	catch (exception& ex) {
		cout << "Блок 2 мы поймали " << ex.what() << endl;
	}

	return 1;
}
#endif 