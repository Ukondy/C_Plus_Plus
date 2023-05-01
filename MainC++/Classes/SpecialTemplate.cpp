#include <string>
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

#if 0
template<typename T>
class Printer {
public:
	void Print(T value) {
		cout << value << end;
	}
};


// специализированный шаблон
template<>
class Printer<string> {
public:
	void Print(string value) {
		cout << "______" << value << "______" << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	Printer<string> p;
	p.Print("Hello World!!!");

	return 1;

}
#endif 