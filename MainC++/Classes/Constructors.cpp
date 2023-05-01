#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class A {
public:
	A() {
		msg = "Пустое сообщение";
	}

	A(string msg) {
		this->msg = msg;
	}
	A(string msg, int num) {
		this->msg = msg;
	}
	void PrintMsg() {
		cout << msg << endl;
	}

private:
	string msg;
};

class B : public A {
public:
	B():A("наше новое сообщение") {
		
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");
	
	A a;
	B b;
	return 1;

}
#endif 