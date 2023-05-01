#include <string>
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	list<int> myList = { 5, 11, 94, 99, 44 };

	for (const auto& elem : myList) {
		cout << elem << endl;
	}

	return 1;

}
#endif 