#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class A {
public:
	string msgOne = "Сообщение один";

private:
	string msgTwo = "Сообщение два";

protected:
	string msgThree = "Сообщение три";

};

class B : public A {
public:
	void PrintMsg() {
		cout << msgOne << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 